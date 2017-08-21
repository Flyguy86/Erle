#ifndef IMU_SPLTYPES_H
#define IMU_SPLTYPES_H

#include "ccpp_Imu_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Quaternion_SplDcps.h"
#include "Vector3_SplDcps.h"

extern c_metaObject __Imu__sensor_msgs__load (c_base base);

extern c_metaObject __Imu__sensor_msgs_msg__load (c_base base);

extern c_metaObject __Imu__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__load (c_base base);
typedef c_double _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9[9];

extern c_metaObject __sensor_msgs_msg_dds__Imu___load (c_base base);
extern const char * __sensor_msgs_msg_dds__Imu___keys (void);
extern const char * __sensor_msgs_msg_dds__Imu___name (void);
struct _sensor_msgs_msg_dds__Imu_ ;
extern  c_bool __sensor_msgs_msg_dds__Imu___copyIn(c_base base, struct sensor_msgs::msg::dds_::Imu_ *from, struct _sensor_msgs_msg_dds__Imu_ *to);
extern  void __sensor_msgs_msg_dds__Imu___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__Imu_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Quaternion_ orientation_;
    _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 orientation_covariance_;
    struct _geometry_msgs_msg_dds__Vector3_ angular_velocity_;
    _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 angular_velocity_covariance_;
    struct _geometry_msgs_msg_dds__Vector3_ linear_acceleration_;
    _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 linear_acceleration_covariance_;
};

#endif
