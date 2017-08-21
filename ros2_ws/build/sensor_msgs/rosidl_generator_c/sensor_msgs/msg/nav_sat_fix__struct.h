// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__NAVSATFIX__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__NAVSATFIX__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <sensor_msgs/NavSatStatus-c.h>

// types for static array fields
ROSIDL_GENERATE_STATIC_ARRAY(sensor_msgs__msg__NavSatFix, position_covariance, double, 9);

// message struct
typedef struct sensor_msgs__msg__NavSatFix
{
  std_msgs__Header header;
  sensor_msgs__NavSatStatus status;
  double latitude;
  double longitude;
  double altitude;
  ROSIDL_Array__sensor_msgs__msg__NavSatFix__position_covariance position_covariance;
  uint8_t position_covariance_type;
} sensor_msgs__msg__NavSatFix;

// constants
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_UNKNOWN = 0u
};
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_APPROXIMATED = 1u
};
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_DIAGONAL_KNOWN = 2u
};
enum
{
  sensor_msgs__msg__NavSatFix__COVARIANCE_TYPE_KNOWN = 3u
};

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__NavSatFix);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__NAVSATFIX__STRUCT_H_
