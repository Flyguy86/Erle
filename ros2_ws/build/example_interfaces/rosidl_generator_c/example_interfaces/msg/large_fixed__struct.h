// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef EXAMPLE_INTERFACES_EXAMPLE_INTERFACES__MSG__LARGEFIXED__STRUCT_H_
#define EXAMPLE_INTERFACES_EXAMPLE_INTERFACES__MSG__LARGEFIXED__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies

// types for static array fields
ROSIDL_GENERATE_STATIC_ARRAY(example_interfaces__msg__LargeFixed, data, int32_t, 255);

// message struct
typedef struct example_interfaces__msg__LargeFixed
{
  ROSIDL_Array__example_interfaces__msg__LargeFixed__data data;
} example_interfaces__msg__LargeFixed;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(example_interfaces__msg__LargeFixed);

#endif  // EXAMPLE_INTERFACES_EXAMPLE_INTERFACES__MSG__LARGEFIXED__STRUCT_H_
