// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__JOYFEEDBACK__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__JOYFEEDBACK__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__JoyFeedback
{
  uint8_t type;
  uint8_t id;
  float intensity;
} sensor_msgs__msg__JoyFeedback;

// constants
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_LED = 0u
};
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_RUMBLE = 1u
};
enum
{
  sensor_msgs__msg__JoyFeedback__TYPE_BUZZER = 2u
};

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__JoyFeedback);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__JOYFEEDBACK__STRUCT_H_
