#!/usr/bin/env python3
# ros_wrapper.py

import subprocess
import json
import time
import sys
import os
import math
import socket
import threading
from transforms3d.euler import quat2euler

# Import ROS2 packages
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist

class ROSInterface(Node):
    def __init__(self):
        super().__init__('ros_interface')
        
        # Store robot data
        self.robot_positions = {}
        self.robot_orientations = {}
        self.robot_velocities = {}
        self.num_robots = 5
        
        # Create subscribers and publishers
        self.setup_ros_communications()
        
        # Setup socket server
        self.socket_server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.socket_server.bind(('localhost', 12345))
        self.socket_server.listen(1)
        self.client_socket = None
        self.client_address = None
        
        # Start socket server thread
        self.socket_thread = threading.Thread(target=self.handle_socket_connection)
        self.socket_thread.daemon = True
        self.socket_thread.start()
        
        # Timer for data exchange
        self.timer = self.create_timer(0.1, self.update_data)
        self.get_logger().info('ROS Interface started - waiting for neural network connection')
        
    def handle_socket_connection(self):
        """Handle socket connection from neural network"""
        while True:
            try:
                self.get_logger().info('Waiting for neural network connection...')
                self.client_socket, self.client_address = self.socket_server.accept()
                self.get_logger().info(f'Neural network connected from {self.client_address}')
                
                while True:
                    # Send data to neural network
                    data = {
                        'positions': self.robot_positions,
                        'orientations': self.robot_orientations,
                        'velocities': self.robot_velocities,
                        'timestamp': time.time()
                    }
                    self.client_socket.sendall(json.dumps(data).encode())
                    
                    # Receive commands from neural network
                    try:
                        cmd_data = self.client_socket.recv(4096)
                        if not cmd_data:
                            break
                        commands = json.loads(cmd_data.decode())
                        
                        # Process commands
                        for robot_id, vel in commands.items():
                            if int(robot_id) in self.cmd_vel_publishers:
                                msg = Twist()
                                msg.linear.x = vel.get('linear', 0.0)
                                msg.angular.z = vel.get('angular', 0.0)
                                self.cmd_vel_publishers[int(robot_id)].publish(msg)
                                
                                # Log commands being sent
                                self.get_logger().info(f'Robot {robot_id}: sent cmd_vel linear={vel.get("linear", 0.0):.2f}, angular={vel.get("angular", 0.0):.2f}')
                    except (json.JSONDecodeError, ConnectionResetError) as e:
                        self.get_logger().error(f'Error receiving commands: {e}')
                        break
                        
            except Exception as e:
                self.get_logger().error(f'Socket error: {e}')
                if self.client_socket:
                    self.client_socket.close()
                self.client_socket = None
                time.sleep(1)  # Wait before retrying
        
    def setup_ros_communications(self):
        # Subscribers
        self.odom_subscribers = []
        for i in range(1, self.num_robots + 1):
            robot_ns = f'limo{i}'
            odom_sub = self.create_subscription(
                Odometry,
                f'/{robot_ns}/odom',
                lambda msg, robot_id=i: self.odom_callback(msg, robot_id),
                10
            )
            self.odom_subscribers.append(odom_sub)
            self.get_logger().info(f'Subscribed to /{robot_ns}/odom')
        
        # Publishers
        self.cmd_vel_publishers = {}
        for i in range(1, self.num_robots + 1):
            robot_ns = f'limo{i}'
            cmd_vel_pub = self.create_publisher(
                Twist,
                f'/{robot_ns}/cmd_vel',
                10
            )
            self.cmd_vel_publishers[i] = cmd_vel_pub
            self.get_logger().info(f'Publishing to /{robot_ns}/cmd_vel')
    
    def odom_callback(self, msg, robot_id):
        # Store position and velocity
        position = msg.pose.pose.position
        self.robot_positions[str(robot_id)] = [position.x, position.y, position.z]
        
        # Extract orientation (convert quaternion to euler angles)
        orientation_q = msg.pose.pose.orientation
        quaternion = [orientation_q.w, orientation_q.x, orientation_q.y, orientation_q.z]  # transforms3d uses w,x,y,z order
        roll, pitch, yaw = quat2euler(quaternion)
        self.robot_orientations[str(robot_id)] = [roll, pitch, yaw]
        
        # Store velocity
        linear = msg.twist.twist.linear
        angular = msg.twist.twist.angular
        self.robot_velocities[str(robot_id)] = [linear.x, linear.y, linear.z, angular.x, angular.y, angular.z]
    
    def update_data(self):
        """This method is now handled by the socket thread"""
        pass

def main():
    rclpy.init()
    node = ROSInterface()
    
    # Start the neural network process in conda env
    script_dir = os.path.dirname(os.path.abspath(__file__))
    neural_script = os.path.join(script_dir, 'neural_network_controller.py')
    
    print(f"Starting neural network in conda env REDIG using: {neural_script}")
    env = os.environ.copy()
    conda_cmd = f"conda run -n REDIG python3 {neural_script}"
    conda_process = subprocess.Popen(conda_cmd, shell=True, env=env)
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("Shutting down...")
    finally:
        # Stop all robots
        stop_msg = Twist()
        for pub in node.cmd_vel_publishers.values():
            pub.publish(stop_msg)
        # Terminate conda process
        conda_process.terminate()
        # Close socket
        if node.client_socket:
            node.client_socket.close()
        node.socket_server.close()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main() 