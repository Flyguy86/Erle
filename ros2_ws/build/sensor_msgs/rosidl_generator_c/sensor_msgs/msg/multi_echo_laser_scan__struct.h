// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__MULTIECHOLASERSCAN__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__MULTIECHOLASERSCAN__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <sensor_msgs/LaserEcho-c.h>
#include <sensor_msgs/LaserEcho-c.h>

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__MultiEchoLaserScan
{
  std_msgs__Header header;
  float angle_min;
  float angle_max;
  float angle_increment;
  float time_increment;
  float scan_time;
  float range_min;
  float range_max;
  ROSIDL_Array__LaserEcho ranges;
  ROSIDL_Array__LaserEcho intensities;
} sensor_msgs__msg__MultiEchoLaserScan;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__MultiEchoLaserScan);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__MULTIECHOLASERSCAN__STRUCT_H_
