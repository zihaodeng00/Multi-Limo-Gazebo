# LIMO Multi-Robot Gazebo Simulation

Launch file `limo_multi_robot.launch.py` spawns **5 LIMO robots** (four-wheel
differential drive) in a single Gazebo world, each in its own ROS 2
namespace (`limo1` … `limo5`), and opens RViz.

Every robot exposes the standard topics under its namespace, e.g.:

```
/limo1/cmd_vel      geometry_msgs/Twist
/limo1/odom         nav_msgs/Odometry
/limo1/scan         sensor_msgs/LaserScan
/limo1/tf, /limo1/tf_static
```

---

## 1. Requirements

- Ubuntu 22.04
- [ROS 2 Humble — Desktop Full](http://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html)
- Gazebo Classic 11 (installed with `ros-humble-desktop-full`)

Install ROS-side dependencies:

```bash
sudo apt update
sudo apt install \
  ros-humble-gazebo-ros-pkgs \
  ros-humble-gazebo-ros2-control \
  ros-humble-joint-state-publisher \
  ros-humble-joint-state-publisher-gui \
  ros-humble-xacro \
  ros-humble-tf-transformations
```

---

## 2. Build the workspace

Clone into a ROS 2 workspace and build:

```bash
mkdir -p ~/agilex_ws/src
cd ~/agilex_ws/src
git clone <this-repo-url> agilex_open_class
cd ~/agilex_ws

# Resolve any missing dependencies
rosdep install --from-paths src --ignore-src -r -y

# Build limo_msgs first, then everything else
colcon build --packages-select limo_msgs
colcon build
```

---

## 3. Configure the world path (one-time)

Open `limo/limo_gazebo_sim/launch/limo_multi_robot.launch.py` and locate
the `world_file_path` near the top. **Replace the absolute path** with
one that exists on your machine, for example:

```python
world_file_path = os.path.join(
    FindPackageShare('limo_description').find('limo_description'),
    'world', 'limo_wedge2.world'
)
```

Available worlds live under `limo/limo_description/world/`:
`limo_line.world`, `limo_line2.world`, `limo_wedge.world`,
`limo_wedge2.world`, `neighborhood.world`, …

---

## 4. Run the simulation

In a new terminal:

```bash
cd ~/agilex_ws
source install/setup.bash
source /usr/share/gazebo/setup.bash

ros2 launch limo_gazebo_sim limo_multi_robot.launch.py
```

Gazebo will open with 5 LIMOs lined up, and RViz will open showing the
robot models.

### Launch arguments

| Argument        | Default | Description                        |
| --------------- | ------- | ---------------------------------- |
| `use_sim_time`  | `True`  | Use Gazebo clock                   |
| `use_simulator` | `True`  | Start Gazebo                       |
| `headless`      | `False` | Skip `gzclient` (server-only)      |
| `use_rviz`      | `True`  | Start RViz                         |
| `gui`           | `True`  | Enable joint_state_publisher_gui   |

Example — run headless without RViz:

```bash
ros2 launch limo_gazebo_sim limo_multi_robot.launch.py headless:=True use_rviz:=False
```

---

## 5. Drive the robots

Drive a single robot from the keyboard:

```bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard \
  --ros-args -r cmd_vel:=/limo1/cmd_vel
```

Or drive all 5 at once with the included controller node, which sends
`0.3 m/s` forward to every robot and prints their odometry:

```bash
python3 limo/multi_robot_controller.py
```

---

## 6. Changing the formation

Robot start poses are set at the bottom of the launch file. The default
is a horizontal line of 5 robots:

```python
ld.add_action(create_robot_launch_description('limo1', -1.15, -2.5))
ld.add_action(create_robot_launch_description('limo2', -0.575, -2.5))
ld.add_action(create_robot_launch_description('limo3',  0.0,  -2.5))
ld.add_action(create_robot_launch_description('limo4',  0.575, -2.5))
ld.add_action(create_robot_launch_description('limo5',  1.15, -2.5))
```

Edit those lines to change positions, add/remove robots, or pick one of
the commented-out wedge / circle formations.

---

## Troubleshooting

- **Gazebo can't find the world** — you didn't update `world_file_path`
  in step 3.
- **Robots spawn on top of each other / fall through the floor** — make
  sure the `(x, y)` coords in step 6 sit inside your chosen world.
- **`spawn_entity.py` times out** — Gazebo may still be loading; just
  rerun the launch.
- **No `/limoN/odom`** — check that each robot got its own
  `robot_state_publisher` running: `ros2 node list | grep limo`.
