// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__VECTOR3STAMPED__STRUCT_H_
#define GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__VECTOR3STAMPED__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <geometry_msgs/Vector3-c.h>

// types for static array fields

// message struct
typedef struct geometry_msgs__msg__Vector3Stamped
{
  std_msgs__Header header;
  geometry_msgs__Vector3 vector;
} geometry_msgs__msg__Vector3Stamped;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(geometry_msgs__msg__Vector3Stamped);

#endif  // GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__VECTOR3STAMPED__STRUCT_H_
