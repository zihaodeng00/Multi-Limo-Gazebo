import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription, GroupAction
from launch.conditions import IfCondition, UnlessCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PythonExpression, TextSubstitution
from launch_ros.actions import Node, PushRosNamespace
from launch_ros.substitutions import FindPackageShare
import launch_ros.descriptions
import math

import launch
import launch.launch_description_sources
import launch.substitutions
import launch_ros
import launch_ros.substitutions

def generate_launch_description():
    # Constants for paths to different files and folders
    package_name = 'limo_description'
    robot_name_in_model = 'limo'
    rviz_config_file_path = 'rviz/urdf.rviz'
    urdf_file_path = 'urdf/limo_four_diff.xacro'
    world_file_path = '/home/zihao/Documents/limo/agilex_open_class/limo/limo_description/world/limo_wedge2.world'
    gazebo_models_path_folder = 'models'
    
    # Set the path to different files and folders.  
    pkg_gazebo_ros = FindPackageShare(package='gazebo_ros').find('gazebo_ros')   
    pkg_share = FindPackageShare(package=package_name).find(package_name)
    default_urdf_model_path = os.path.join(pkg_share, urdf_file_path)
    default_rviz_config_path = os.path.join(pkg_share, rviz_config_file_path)
    world_path = os.path.join(pkg_share, world_file_path)
    gazebo_models_path = os.path.join(pkg_share, gazebo_models_path_folder)
    os.environ["GAZEBO_MODEL_PATH"] = gazebo_models_path
    
    # Launch configuration variables specific to simulation
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    gui = LaunchConfiguration('gui')
    headless = LaunchConfiguration('headless')
    rviz_config_file = LaunchConfiguration('rviz_config_file')
    urdf_model = LaunchConfiguration('urdf_model')
    use_rviz = LaunchConfiguration('use_rviz')
    use_simulator = LaunchConfiguration('use_simulator')
    
    # Declare the launch arguments  
    declare_use_sim_time_cmd = DeclareLaunchArgument(
        name='use_sim_time',
        default_value='True',
        description='Use simulation (Gazebo) clock if true')
        
    declare_use_joint_state_publisher_cmd = DeclareLaunchArgument(
        name='gui',
        default_value='True',
        description='Flag to enable joint_state_publisher_gui')
        
    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        name='rviz_config_file',
        default_value=default_rviz_config_path,
        description='Full path to the RVIZ config file to use')
        
    declare_simulator_cmd = DeclareLaunchArgument(
        name='headless',
        default_value='False',
        description='Whether to execute gzclient')
        
    declare_urdf_model_path_cmd = DeclareLaunchArgument(
        name='urdf_model', 
        default_value=default_urdf_model_path, 
        description='Absolute path to robot urdf file')
        
    declare_use_rviz_cmd = DeclareLaunchArgument(
        name='use_rviz',
        default_value='True',
        description='Whether to start RVIZ')
        
    declare_use_simulator_cmd = DeclareLaunchArgument(
        name='use_simulator',
        default_value='True',
        description='Whether to start the simulator')
    
    # Start Gazebo server
    start_gazebo_server_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')),
        condition=IfCondition(use_simulator),
        launch_arguments={'world': world_path}.items()
    )
    
    # Start Gazebo client    
    start_gazebo_client_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')),
        condition=IfCondition(PythonExpression([use_simulator, ' and not ', headless])))
    
    # Launch RViz
    start_rviz_cmd = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_file])

    # Function to create a robot with its namespace
    def create_robot_launch_description(namespace, x_pose, y_pose):
        # Create robot specific URDF with namespace
        robot_description_content = Command([
            'xacro', ' ', os.path.join(pkg_share, urdf_file_path),
            ' robot_namespace:=', namespace
        ])
        
        group = GroupAction([
            # Push namespace for all nodes in this group
            PushRosNamespace(namespace),
            
            # Robot State Publisher
            Node(
                package='robot_state_publisher',
                executable='robot_state_publisher',
                parameters=[{
                    'robot_description': launch_ros.descriptions.ParameterValue(
                        robot_description_content,
                        value_type=str
                    ),
                    'use_sim_time': use_sim_time
                }],
                remappings=[
                    ('/tf', 'tf'),
                    ('/tf_static', 'tf_static')
                ]
            ),
            
            # Joint State Publisher
            Node(
                package='joint_state_publisher',
                executable='joint_state_publisher',
                parameters=[{'use_sim_time': use_sim_time}]
            ),
            
            # Spawn Entity
            Node(
                package='gazebo_ros', 
                executable='spawn_entity.py',
                arguments=[
                    '-entity', f'{namespace}_{robot_name_in_model}',
                    '-topic', 'robot_description',
                    '-x', str(x_pose),
                    '-y', str(y_pose),
                    '-z', '0.0',
                    '-Y', str(1.5708),  # 90 degrees counterclockwise (π/2 radians)
                    '-robot_namespace', namespace
                ],
                output='screen'
            )
        ])
        return group

    # Create the launch description and populate
    ld = LaunchDescription()
    
    # Declare the launch options
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_use_joint_state_publisher_cmd)
    ld.add_action(declare_rviz_config_file_cmd)
    ld.add_action(declare_simulator_cmd)
    ld.add_action(declare_urdf_model_path_cmd)
    ld.add_action(declare_use_rviz_cmd) 
    ld.add_action(declare_use_simulator_cmd)
    
    # Add Gazebo and RViz
    ld.add_action(start_gazebo_server_cmd)
    ld.add_action(start_gazebo_client_cmd)
    ld.add_action(start_rviz_cmd)
    
    # # REDIG WEDGE
    # ld.add_action(create_robot_launch_description('limo1', -0.23001227, -2.4999895))
    # ld.add_action(create_robot_launch_description('limo2', 0.5299874, -2.499989))
    # ld.add_action(create_robot_launch_description('limo3', 0.14998804, -2.1199899))
    # ld.add_action(create_robot_launch_description('limo4', 0.8999871, -2.879989))
    # ld.add_action(create_robot_launch_description('limo5', -0.6100117, -2.8799899))

    # # DGNN Circle
    # ld.add_action(create_robot_launch_description('limo1', -0, -1.7999793))
    # # ld.add_action(create_robot_launch_description('limo2', 0.319899180101581, -1.99990817074035))
    # # ld.add_action(create_robot_launch_description('limo3', -0.000100257072742046, -1.67990861852392))
    # # ld.add_action(create_robot_launch_description('limo4', 0.639899292322623, -2.31990827371845))
    # # ld.add_action(create_robot_launch_description('limo5', -0.640100091979644, -2.31990883870891))

    # # ld.add_action(create_robot_launch_description('limo1', -0.000023193164, -1.7999793))
    # ld.add_action(create_robot_launch_description('limo2', -0.6657629, -2.2836697))
    # ld.add_action(create_robot_launch_description('limo3', -0.4114726, -3.06629))
    # ld.add_action(create_robot_launch_description('limo4', 0.41142803, -3.0662906))
    # ld.add_action(create_robot_launch_description('limo5', 0.6657177, -2.2836702))

    # Line
    ld.add_action(create_robot_launch_description('limo1', -1.14999997615814, -2.5))
    ld.add_action(create_robot_launch_description('limo2', -0.574999988079071, -2.5))
    ld.add_action(create_robot_launch_description('limo3', 0, -2.5))
    ld.add_action(create_robot_launch_description('limo4', 0.574999988079071, -2.5))
    ld.add_action(create_robot_launch_description('limo5', 1.14999997615814, -2.5))
    return ld 