// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef NAV_MSGS_NAV_MSGS__MSG__OCCUPANCYGRID__STRUCT_H_
#define NAV_MSGS_NAV_MSGS__MSG__OCCUPANCYGRID__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <nav_msgs/MapMetaData-c.h>

// types for static array fields

// message struct
typedef struct nav_msgs__msg__OccupancyGrid
{
  std_msgs__Header header;
  nav_msgs__MapMetaData info;
  ROSIDL_Array__int8 data;
} nav_msgs__msg__OccupancyGrid;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(nav_msgs__msg__OccupancyGrid);

#endif  // NAV_MSGS_NAV_MSGS__MSG__OCCUPANCYGRID__STRUCT_H_
