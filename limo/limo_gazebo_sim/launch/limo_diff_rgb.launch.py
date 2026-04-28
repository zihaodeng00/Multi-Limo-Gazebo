import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import launch_ros.descriptions
import launch.substitutions


def generate_launch_description():
    pkg_limo_desc = FindPackageShare(package='limo_description').find('limo_description')
    pkg_gazebo_ros = FindPackageShare(package='gazebo_ros').find('gazebo_ros')
    pkg_gazebo_sim = get_package_share_directory('limo_gazebo_sim')

    urdf_file = os.path.join(pkg_limo_desc, 'urdf', 'limo_four_diff_rgb.xacro')
    world_file = os.path.join(pkg_gazebo_sim, 'worlds', 'world_v1.world')

    use_sim_time = LaunchConfiguration('use_sim_time', default='true')

    robot_description = launch_ros.descriptions.ParameterValue(
        launch.substitutions.Command(['xacro ', urdf_file, ' robot_namespace:=limo']),
        value_type=str
    )

    # Start Gazebo with world
    start_gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_gazebo_ros, 'launch', 'gazebo.launch.py')
        ),
        launch_arguments={'world': world_file, 'verbose': 'true'}.items()
    )

    # Publish robot TF tree
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'use_sim_time': use_sim_time,
            'robot_description': robot_description
        }]
    )

    # Spawn robot into Gazebo
    spawn_entity = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=[
            '-entity', 'limo',
            '-topic', 'robot_description',
            '-x', '0.0',
            '-y', '0.0',
            '-z', '0.0',
            '-timeout', '1000'
        ],
        output='screen'
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='true',
            description='Use simulation (Gazebo) clock if true'),
        start_gazebo,
        robot_state_publisher,
        spawn_entity,
    ])
