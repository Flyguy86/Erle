#include "Imu_SplDcps.h"
#include "ccpp_Imu_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__Imu___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::Imu_";
}

const char *
__sensor_msgs_msg_dds__Imu___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyIn(
    c_base base,
    ::sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9 *from,
    _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    memcpy (to, *from, sizeof (*to));
    return result;
}

c_bool
__sensor_msgs_msg_dds__Imu___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::Imu_ *from,
    struct _sensor_msgs_msg_dds__Imu_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Quaternion___copyIn(c_base, ::geometry_msgs::msg::dds_::Quaternion_ *, _geometry_msgs_msg_dds__Quaternion_ *);
        result = __geometry_msgs_msg_dds__Quaternion___copyIn(base, &from->orientation_, &to->orientation_);
    }
    if(result){
        extern c_bool __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyIn(c_base, ::sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9 *, _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 *);
        result = __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyIn(base, &from->orientation_covariance_, &to->orientation_covariance_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base, ::geometry_msgs::msg::dds_::Vector3_ *, _geometry_msgs_msg_dds__Vector3_ *);
        result = __geometry_msgs_msg_dds__Vector3___copyIn(base, &from->angular_velocity_, &to->angular_velocity_);
    }
    if(result){
        extern c_bool __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyIn(c_base, ::sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9 *, _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 *);
        result = __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyIn(base, &from->angular_velocity_covariance_, &to->angular_velocity_covariance_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base, ::geometry_msgs::msg::dds_::Vector3_ *, _geometry_msgs_msg_dds__Vector3_ *);
        result = __geometry_msgs_msg_dds__Vector3___copyIn(base, &from->linear_acceleration_, &to->linear_acceleration_);
    }
    if(result){
        extern c_bool __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyIn(c_base, ::sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9 *, _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 *);
        result = __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyIn(base, &from->linear_acceleration_covariance_, &to->linear_acceleration_covariance_);
    }
    return result;
}

void
__sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyOut(
    void *_from,
    void *_to)
{
    _sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 *from = (_sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9 *)_from;
    ::sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9 *to = (::sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9 *)_to;
    memcpy (*to, from, sizeof (*from));
}

void
__sensor_msgs_msg_dds__Imu___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__Imu_ *from = (struct _sensor_msgs_msg_dds__Imu_ *)_from;
    struct ::sensor_msgs::msg::dds_::Imu_ *to = (struct ::sensor_msgs::msg::dds_::Imu_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __geometry_msgs_msg_dds__Quaternion___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Quaternion___copyOut((void *)&from->orientation_, (void *)&to->orientation_);
    }
    {
        extern void __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyOut(void *, void *);
        __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyOut((void *)&from->orientation_covariance_, (void *)&to->orientation_covariance_);
    }
    {
        extern void __geometry_msgs_msg_dds__Vector3___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Vector3___copyOut((void *)&from->angular_velocity_, (void *)&to->angular_velocity_);
    }
    {
        extern void __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyOut(void *, void *);
        __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyOut((void *)&from->angular_velocity_covariance_, (void *)&to->angular_velocity_covariance_);
    }
    {
        extern void __geometry_msgs_msg_dds__Vector3___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Vector3___copyOut((void *)&from->linear_acceleration_, (void *)&to->linear_acceleration_);
    }
    {
        extern void __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyOut(void *, void *);
        __sensor_msgs_msg_dds__sensor_msgs__Imu__double_array_9__copyOut((void *)&from->linear_acceleration_covariance_, (void *)&to->linear_acceleration_covariance_);
    }
}

