// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef NAV_MSGS_NAV_MSGS__MSG__MAPMETADATA__STRUCT_H_
#define NAV_MSGS_NAV_MSGS__MSG__MAPMETADATA__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <builtin_interfaces/Time-c.h>
#include <geometry_msgs/Pose-c.h>

// types for static array fields

// message struct
typedef struct nav_msgs__msg__MapMetaData
{
  builtin_interfaces__Time map_load_time;
  float resolution;
  uint32_t width;
  uint32_t height;
  geometry_msgs__Pose origin;
} nav_msgs__msg__MapMetaData;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(nav_msgs__msg__MapMetaData);

#endif  // NAV_MSGS_NAV_MSGS__MSG__MAPMETADATA__STRUCT_H_
