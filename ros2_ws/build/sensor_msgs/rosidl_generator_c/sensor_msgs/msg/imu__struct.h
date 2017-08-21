// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__IMU__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__IMU__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <geometry_msgs/Quaternion-c.h>
#include <geometry_msgs/Vector3-c.h>
#include <geometry_msgs/Vector3-c.h>

// types for static array fields
ROSIDL_GENERATE_STATIC_ARRAY(sensor_msgs__msg__Imu, orientation_covariance, double, 9);
ROSIDL_GENERATE_STATIC_ARRAY(sensor_msgs__msg__Imu, angular_velocity_covariance, double, 9);
ROSIDL_GENERATE_STATIC_ARRAY(sensor_msgs__msg__Imu, linear_acceleration_covariance, double, 9);

// message struct
typedef struct sensor_msgs__msg__Imu
{
  std_msgs__Header header;
  geometry_msgs__Quaternion orientation;
  ROSIDL_Array__sensor_msgs__msg__Imu__orientation_covariance orientation_covariance;
  geometry_msgs__Vector3 angular_velocity;
  ROSIDL_Array__sensor_msgs__msg__Imu__angular_velocity_covariance angular_velocity_covariance;
  geometry_msgs__Vector3 linear_acceleration;
  ROSIDL_Array__sensor_msgs__msg__Imu__linear_acceleration_covariance linear_acceleration_covariance;
} sensor_msgs__msg__Imu;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__Imu);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__IMU__STRUCT_H_
