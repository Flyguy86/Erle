// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__POSE__STRUCT_H_
#define GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__POSE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <geometry_msgs/Point-c.h>
#include <geometry_msgs/Quaternion-c.h>

// types for static array fields

// message struct
typedef struct geometry_msgs__msg__Pose
{
  geometry_msgs__Point position;
  geometry_msgs__Quaternion orientation;
} geometry_msgs__msg__Pose;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(geometry_msgs__msg__Pose);

#endif  // GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__POSE__STRUCT_H_
