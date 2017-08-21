// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__NAVSATSTATUS__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__NAVSATSTATUS__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__NavSatStatus
{
  int8_t status;
  uint16_t service;
} sensor_msgs__msg__NavSatStatus;

// constants
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_NO_FIX = -1
};
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_FIX = 0
};
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_SBAS_FIX = 1
};
enum
{
  sensor_msgs__msg__NavSatStatus__STATUS_GBAS_FIX = 2
};
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GPS = 1u
};
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GLONASS = 2u
};
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_COMPASS = 4u
};
enum
{
  sensor_msgs__msg__NavSatStatus__SERVICE_GALILEO = 8u
};

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__NavSatStatus);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__NAVSATSTATUS__STRUCT_H_
