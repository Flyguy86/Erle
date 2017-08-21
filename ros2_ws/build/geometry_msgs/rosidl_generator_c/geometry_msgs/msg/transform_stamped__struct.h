// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TRANSFORMSTAMPED__STRUCT_H_
#define GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TRANSFORMSTAMPED__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <geometry_msgs/Transform-c.h>

// types for static array fields

// message struct
typedef struct geometry_msgs__msg__TransformStamped
{
  std_msgs__Header header;
  char * child_frame_id;
  geometry_msgs__Transform transform;
} geometry_msgs__msg__TransformStamped;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(geometry_msgs__msg__TransformStamped);

#endif  // GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TRANSFORMSTAMPED__STRUCT_H_
