// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETEREVENT__STRUCT_H_
#define RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETEREVENT__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <rcl_interfaces/Parameter-c.h>
#include <rcl_interfaces/Parameter-c.h>
#include <rcl_interfaces/Parameter-c.h>

// types for static array fields

// message struct
typedef struct rcl_interfaces__msg__ParameterEvent
{
  ROSIDL_Array__Parameter new_parameters;
  ROSIDL_Array__Parameter changed_parameters;
  ROSIDL_Array__Parameter deleted_parameters;
} rcl_interfaces__msg__ParameterEvent;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(rcl_interfaces__msg__ParameterEvent);

#endif  // RCL_INTERFACES_RCL_INTERFACES__MSG__PARAMETEREVENT__STRUCT_H_
