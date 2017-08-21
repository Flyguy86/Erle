// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETEREVENTDESCRIPTORS__STRUCT_H_
#define RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETEREVENTDESCRIPTORS__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <rcl_interfaces/ParameterDescriptor-c.h>
#include <rcl_interfaces/ParameterDescriptor-c.h>
#include <rcl_interfaces/ParameterDescriptor-c.h>

// types for static array fields

// message struct
typedef struct rcl_interfaces__msg__ParameterEventDescriptors
{
  ROSIDL_Array__ParameterDescriptor new_parameters;
  ROSIDL_Array__ParameterDescriptor changed_parameters;
  ROSIDL_Array__ParameterDescriptor deleted_parameters;
} rcl_interfaces__msg__ParameterEventDescriptors;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(rcl_interfaces__msg__ParameterEventDescriptors);

#endif  // RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETEREVENTDESCRIPTORS__STRUCT_H_
