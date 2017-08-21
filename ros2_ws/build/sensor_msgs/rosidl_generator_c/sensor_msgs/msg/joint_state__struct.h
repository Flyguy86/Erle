// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__JOINTSTATE__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__JOINTSTATE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__JointState
{
  std_msgs__Header header;
  ROSIDL_Array__string name;
  ROSIDL_Array__float64 position;
  ROSIDL_Array__float64 velocity;
  ROSIDL_Array__float64 effort;
} sensor_msgs__msg__JointState;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__JointState);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__JOINTSTATE__STRUCT_H_
