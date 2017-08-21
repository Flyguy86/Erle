// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef NAV_MSGS_NAV_MSGS__MSG__GRIDCELLS__STRUCT_H_
#define NAV_MSGS_NAV_MSGS__MSG__GRIDCELLS__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <geometry_msgs/Point-c.h>

// types for static array fields

// message struct
typedef struct nav_msgs__msg__GridCells
{
  std_msgs__Header header;
  float cell_width;
  float cell_height;
  ROSIDL_Array__Point cells;
} nav_msgs__msg__GridCells;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(nav_msgs__msg__GridCells);

#endif  // NAV_MSGS_NAV_MSGS__MSG__GRIDCELLS__STRUCT_H_
