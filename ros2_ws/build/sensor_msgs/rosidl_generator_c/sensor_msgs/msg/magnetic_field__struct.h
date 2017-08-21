// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__MAGNETICFIELD__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__MAGNETICFIELD__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <geometry_msgs/Vector3-c.h>

// types for static array fields
ROSIDL_GENERATE_STATIC_ARRAY(sensor_msgs__msg__MagneticField, magnetic_field_covariance, double, 9);

// message struct
typedef struct sensor_msgs__msg__MagneticField
{
  std_msgs__Header header;
  geometry_msgs__Vector3 magnetic_field;
  ROSIDL_Array__sensor_msgs__msg__MagneticField__magnetic_field_covariance magnetic_field_covariance;
} sensor_msgs__msg__MagneticField;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__MagneticField);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__MAGNETICFIELD__STRUCT_H_
