// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef PENDULUM_MSGS_PENDULUM_MSGS__MSG__JOINTSTATE__STRUCT_H_
#define PENDULUM_MSGS_PENDULUM_MSGS__MSG__JOINTSTATE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies

// types for static array fields

// message struct
typedef struct pendulum_msgs__msg__JointState
{
  double position;
  double velocity;
  double effort;
} pendulum_msgs__msg__JointState;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(pendulum_msgs__msg__JointState);

#endif  // PENDULUM_MSGS_PENDULUM_MSGS__MSG__JOINTSTATE__STRUCT_H_
