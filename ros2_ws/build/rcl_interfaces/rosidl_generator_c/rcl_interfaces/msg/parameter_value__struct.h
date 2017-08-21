// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETERVALUE__STRUCT_H_
#define RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETERVALUE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies

// types for static array fields

// message struct
typedef struct rcl_interfaces__msg__ParameterValue
{
  uint8_t type;
  bool bool_value;
  int64_t integer_value;
  double double_value;
  char * string_value;
  ROSIDL_Array__byte bytes_value;
} rcl_interfaces__msg__ParameterValue;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(rcl_interfaces__msg__ParameterValue);

#endif  // RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETERVALUE__STRUCT_H_
