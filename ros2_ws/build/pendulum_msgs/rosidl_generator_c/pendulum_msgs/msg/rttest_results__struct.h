// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef PENDULUM_MSGS_PENDULUM_MSGS__MSG__RTTESTRESULTS__STRUCT_H_
#define PENDULUM_MSGS_PENDULUM_MSGS__MSG__RTTESTRESULTS__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <builtin_interfaces/Time-c.h>
#include <pendulum_msgs/JointCommand-c.h>
#include <pendulum_msgs/JointState-c.h>

// types for static array fields

// message struct
typedef struct pendulum_msgs__msg__RttestResults
{
  builtin_interfaces__Time stamp;
  pendulum_msgs__JointCommand command;
  pendulum_msgs__JointState state;
  uint64_t cur_latency;
  double mean_latency;
  uint64_t min_latency;
  uint64_t max_latency;
  uint64_t minor_pagefaults;
  uint64_t major_pagefaults;
} pendulum_msgs__msg__RttestResults;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(pendulum_msgs__msg__RttestResults);

#endif  // PENDULUM_MSGS_PENDULUM_MSGS__MSG__RTTESTRESULTS__STRUCT_H_
