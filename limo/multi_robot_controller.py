#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist
from tf_transformations import euler_from_quaternion
import math

class MultiRobotController(Node):
    def __init__(self):
        super().__init__('multi_robot_controller')
        
        # Number of robots
        self.num_robots = 5
        
        # Store robot data
        self.robot_positions = {}  # Store positions {robot_id: (x, y, z)}
        self.robot_orientations = {}  # Store orientations in euler angles {robot_id: (roll, pitch, yaw)}
        self.robot_velocities = {}  # Store velocities {robot_id: (linear_x, angular_z)}
        
        # Create subscribers for each robot's odometry
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
        
        # Create publishers for each robot's cmd_vel
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
        
        # Timer for publishing velocity commands
        self.timer = self.create_timer(0.1, self.publish_velocities)
        self.get_logger().info('Multi-robot controller initialized')
    
    def odom_callback(self, msg, robot_id):
        """Process odometry data from a robot"""
        # Extract position
        position = msg.pose.pose.position
        self.robot_positions[robot_id] = (position.x, position.y, position.z)
        
        # Extract orientation (convert quaternion to euler angles)
        orientation_q = msg.pose.pose.orientation
        orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
        roll, pitch, yaw = euler_from_quaternion(orientation_list)
        self.robot_orientations[robot_id] = (roll, pitch, yaw)
        
        # Extract velocities
        linear_vel = msg.twist.twist.linear
        angular_vel = msg.twist.twist.angular
        self.robot_velocities[robot_id] = (linear_vel.x, angular_vel.z)
        
        # Log the data (uncomment if you want detailed logs)
        # self.get_logger().info(
        #     f'Robot {robot_id} - Position: ({position.x:.2f}, {position.y:.2f}, {position.z:.2f}), '
        #     f'Yaw: {yaw:.2f}, Linear vel: {linear_vel.x:.2f}, Angular vel: {angular_vel.z:.2f}'
        # )
    
    def publish_velocities(self):
        """Publish velocity commands to all robots"""
        # Create a Twist message for constant velocity
        twist_msg = Twist()
        twist_msg.linear.x = 0.3  # 0.3 m/s forward
        twist_msg.angular.z = 0.0  # No rotation
        
        # Publish to each robot
        for robot_id, publisher in self.cmd_vel_publishers.items():
            publisher.publish(twist_msg)
            robot_ns = f'limo{robot_id}'
            
            # Print position and velocity if available
            if robot_id in self.robot_positions and robot_id in self.robot_velocities:
                pos = self.robot_positions[robot_id]
                vel = self.robot_velocities[robot_id]
                self.get_logger().info(
                    f'{robot_ns} - Pos: ({pos[0]:.2f}, {pos[1]:.2f}), '
                    f'Vel: ({vel[0]:.2f}, {vel[1]:.2f}) - Sending cmd_vel: {twist_msg.linear.x} m/s'
                )

def main(args=None):
    rclpy.init(args=args)
    controller = MultiRobotController()
    
    try:
        rclpy.spin(controller)
    except KeyboardInterrupt:
        # Stop all robots when closing
        stop_msg = Twist()
        for publisher in controller.cmd_vel_publishers.values():
            publisher.publish(stop_msg)
        controller.get_logger().info('Stopping all robots and shutting down')
    finally:
        controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main() 