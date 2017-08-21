// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TWISTWITHCOVARIANCE__STRUCT_H_
#define GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TWISTWITHCOVARIANCE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <geometry_msgs/Twist-c.h>

// types for static array fields
ROSIDL_GENERATE_STATIC_ARRAY(geometry_msgs__msg__TwistWithCovariance, covariance, double, 36);

// message struct
typedef struct geometry_msgs__msg__TwistWithCovariance
{
  geometry_msgs__Twist twist;
  ROSIDL_Array__geometry_msgs__msg__TwistWithCovariance__covariance covariance;
} geometry_msgs__msg__TwistWithCovariance;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(geometry_msgs__msg__TwistWithCovariance);

#endif  // GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__TWISTWITHCOVARIANCE__STRUCT_H_
