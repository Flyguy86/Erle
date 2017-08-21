// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__MULTIDOFJOINTSTATE__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__MULTIDOFJOINTSTATE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <geometry_msgs/Transform-c.h>
#include <geometry_msgs/Twist-c.h>
#include <geometry_msgs/Wrench-c.h>

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__MultiDOFJointState
{
  std_msgs__Header header;
  ROSIDL_Array__string joint_names;
  ROSIDL_Array__Transform transforms;
  ROSIDL_Array__Twist twist;
  ROSIDL_Array__Wrench wrench;
} sensor_msgs__msg__MultiDOFJointState;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__MultiDOFJointState);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__MULTIDOFJOINTSTATE__STRUCT_H_
