// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__POSEWITHCOVARIANCE__STRUCT_H_
#define GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__POSEWITHCOVARIANCE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <geometry_msgs/Pose-c.h>

// types for static array fields
ROSIDL_GENERATE_STATIC_ARRAY(geometry_msgs__msg__PoseWithCovariance, covariance, double, 36);

// message struct
typedef struct geometry_msgs__msg__PoseWithCovariance
{
  geometry_msgs__Pose pose;
  ROSIDL_Array__geometry_msgs__msg__PoseWithCovariance__covariance covariance;
} geometry_msgs__msg__PoseWithCovariance;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(geometry_msgs__msg__PoseWithCovariance);

#endif  // GEOMETRY_MSGS_GEOMETRY_MSGS__MSG__POSEWITHCOVARIANCE__STRUCT_H_
