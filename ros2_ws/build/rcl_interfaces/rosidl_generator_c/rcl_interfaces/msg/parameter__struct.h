// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETER__STRUCT_H_
#define RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETER__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <rcl_interfaces/ParameterValue-c.h>

// types for static array fields

// message struct
typedef struct rcl_interfaces__msg__Parameter
{
  char * name;
  rcl_interfaces__ParameterValue value;
} rcl_interfaces__msg__Parameter;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(rcl_interfaces__msg__Parameter);

#endif  // RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETER__STRUCT_H_
