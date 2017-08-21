// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef STD_MSGS_STD_MSGS__MSG__BYTEMULTIARRAY__STRUCT_H_
#define STD_MSGS_STD_MSGS__MSG__BYTEMULTIARRAY__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/MultiArrayLayout-c.h>

// types for static array fields

// message struct
typedef struct std_msgs__msg__ByteMultiArray
{
  std_msgs__MultiArrayLayout layout;
  ROSIDL_Array__byte data;
} std_msgs__msg__ByteMultiArray;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(std_msgs__msg__ByteMultiArray);

#endif  // STD_MSGS_STD_MSGS__MSG__BYTEMULTIARRAY__STRUCT_H_
