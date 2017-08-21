// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__LASERSCAN__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__LASERSCAN__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__LaserScan
{
  std_msgs__Header header;
  float angle_min;
  float angle_max;
  float angle_increment;
  float time_increment;
  float scan_time;
  float range_min;
  float range_max;
  ROSIDL_Array__float32 ranges;
  ROSIDL_Array__float32 intensities;
} sensor_msgs__msg__LaserScan;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__LaserScan);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__LASERSCAN__STRUCT_H_
