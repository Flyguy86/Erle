// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef STD_MSGS_STD_MSGS__MSG__HEADER__STRUCT_H_
#define STD_MSGS_STD_MSGS__MSG__HEADER__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <builtin_interfaces/Time-c.h>

// types for static array fields

// message struct
typedef struct std_msgs__msg__Header
{
  builtin_interfaces__Time stamp;
  char * frame_id;
} std_msgs__msg__Header;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(std_msgs__msg__Header);

#endif  // STD_MSGS_STD_MSGS__MSG__HEADER__STRUCT_H_
