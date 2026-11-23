#!/usr/bin/env python3
"""Hold-to-drive keyboard teleop: publishes unstamped geometry_msgs/Twist on /cmd_vel.

While a movement key is held (terminal key-repeat), the robot moves.
When you release the key, cmd_vel goes to zero and the robot stops.
"""

import select
import sys
import termios
import tty

import rclpy
from geometry_msgs.msg import Twist
from rclpy.node import Node


HELP = """
Hold-to-drive keyboard teleop (unstamped Twist -> /cmd_vel)
-----------------------------------------------------------
Hold a key to move. Release to stop.

   u    i    o
   j    k    l
   m    ,    .

i/,: forward/back
j/l: turn left/right
u/o/m/.: diagonals
k or space: stop
q: quit
"""

# key -> (linear_x scale, angular_z scale)
# angular.z: + = left (CCW). Signs match Gazebo DiffDrive with geometric L/R wheels.
MOVE_BINDINGS = {
    'i': (1.0, 0.0),
    ',': (-1.0, 0.0),
    'j': (0.0, 1.0),
    'l': (0.0, -1.0),
    'u': (1.0, 1.0),
    'o': (1.0, -1.0),
    'm': (-1.0, 1.0),
    '.': (-1.0, -1.0),
    'k': (0.0, 0.0),
    ' ': (0.0, 0.0),
}


class KeyboardTeleop(Node):

    def __init__(self):
        super().__init__('keyboard_teleop')
        self.declare_parameter('linear_speed', 0.3)
        self.declare_parameter('angular_speed', 0.5)
        self.declare_parameter('cmd_vel_topic', '/cmd_vel')
        self.declare_parameter('publish_rate', 20.0)
        # Stop if no key event for this long (seconds). Terminal key-repeat
        # keeps refreshing this while a key is held.
        self.declare_parameter('key_timeout', 0.25)

        topic = self.get_parameter('cmd_vel_topic').get_parameter_value().string_value
        rate = self.get_parameter('publish_rate').get_parameter_value().double_value
        self.linear_speed = self.get_parameter('linear_speed').value
        self.angular_speed = self.get_parameter('angular_speed').value
        self.key_timeout = self.get_parameter('key_timeout').value

        self.pub = self.create_publisher(Twist, topic, 10)
        self.target_linear = 0.0
        self.target_angular = 0.0
        self.last_key_time = self.get_clock().now()

        period = 1.0 / max(rate, 1.0)
        self.create_timer(period, self._publish_cmd)

        self.get_logger().info(f'Publishing unstamped Twist on {topic}')
        print(HELP)

    def handle_key(self, key: str) -> bool:
        """Return False to quit."""
        if key in ('q', '\x03'):
            return False

        if key in MOVE_BINDINGS:
            lin_s, ang_s = MOVE_BINDINGS[key]
            self.target_linear = lin_s * float(self.linear_speed)
            self.target_angular = ang_s * float(self.angular_speed)
            self.last_key_time = self.get_clock().now()
            print(
                f'\rlinear={self.target_linear:.2f}  angular={self.target_angular:.2f}   ',
                end='',
                flush=True,
            )
        return True

    def _publish_cmd(self):
        now = self.get_clock().now()
        age = (now - self.last_key_time).nanoseconds / 1e9

        msg = Twist()
        if age <= float(self.key_timeout):
            msg.linear.x = self.target_linear
            msg.angular.z = self.target_angular
        else:
            # Key released / timed out -> stop
            msg.linear.x = 0.0
            msg.angular.z = 0.0
            self.target_linear = 0.0
            self.target_angular = 0.0

        self.pub.publish(msg)

    def stop(self):
        self.pub.publish(Twist())


def get_key(settings, timeout: float) -> str:
    tty.setraw(sys.stdin.fileno())
    rlist, _, _ = select.select([sys.stdin], [], [], timeout)
    key = sys.stdin.read(1) if rlist else ''
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key


def main(args=None):
    if not sys.stdin.isatty():
        print('keyboard_teleop needs an interactive terminal', file=sys.stderr)
        return 1

    settings = termios.tcgetattr(sys.stdin)
    rclpy.init(args=args)
    node = KeyboardTeleop()

    try:
        while rclpy.ok():
            rclpy.spin_once(node, timeout_sec=0.0)
            key = get_key(settings, timeout=0.05)
            if key and not node.handle_key(key):
                break
    except Exception as exc:
        print(f'\nTeleop error: {exc}', file=sys.stderr)
    finally:
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
        node.stop()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()
        print('\nStopped.')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
