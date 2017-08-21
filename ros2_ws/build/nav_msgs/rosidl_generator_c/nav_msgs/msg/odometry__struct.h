// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef NAV_MSGS_NAV_MSGS__MSG__ODOMETRY__STRUCT_H_
#define NAV_MSGS_NAV_MSGS__MSG__ODOMETRY__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <geometry_msgs/PoseWithCovariance-c.h>
#include <geometry_msgs/TwistWithCovariance-c.h>

// types for static array fields

// message struct
typedef struct nav_msgs__msg__Odometry
{
  std_msgs__Header header;
  char * child_frame_id;
  geometry_msgs__PoseWithCovariance pose;
  geometry_msgs__TwistWithCovariance twist;
} nav_msgs__msg__Odometry;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(nav_msgs__msg__Odometry);

#endif  // NAV_MSGS_NAV_MSGS__MSG__ODOMETRY__STRUCT_H_
