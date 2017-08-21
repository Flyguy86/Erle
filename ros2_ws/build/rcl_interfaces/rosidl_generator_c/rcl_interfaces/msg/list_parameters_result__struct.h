// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef RCL_INTERFACES_RCL_INTERFACES__MSG__LISTPARAMETERSRESULT__STRUCT_H_
#define RCL_INTERFACES_RCL_INTERFACES__MSG__LISTPARAMETERSRESULT__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies

// types for static array fields

// message struct
typedef struct rcl_interfaces__msg__ListParametersResult
{
  ROSIDL_Array__string names;
  ROSIDL_Array__string prefixes;
} rcl_interfaces__msg__ListParametersResult;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(rcl_interfaces__msg__ListParametersResult);

#endif  // RCL_INTERFACES_RCL_INTERFACES__MSG__LISTPARAMETERSRESULT__STRUCT_H_
