#include "PoseWithCovariance_SplDcps.h"
#include "ccpp_PoseWithCovariance_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__PoseWithCovariance___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::PoseWithCovariance_";
}

const char *
__geometry_msgs_msg_dds__PoseWithCovariance___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36__copyIn(
    c_base base,
    ::geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36 *from,
    _geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36 *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    memcpy (to, *from, sizeof (*to));
    return result;
}

c_bool
__geometry_msgs_msg_dds__PoseWithCovariance___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::PoseWithCovariance_ *from,
    struct _geometry_msgs_msg_dds__PoseWithCovariance_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __geometry_msgs_msg_dds__Pose___copyIn(c_base, ::geometry_msgs::msg::dds_::Pose_ *, _geometry_msgs_msg_dds__Pose_ *);
        result = __geometry_msgs_msg_dds__Pose___copyIn(base, &from->pose_, &to->pose_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36__copyIn(c_base, ::geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36 *, _geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36 *);
        result = __geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36__copyIn(base, &from->covariance_, &to->covariance_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36__copyOut(
    void *_from,
    void *_to)
{
    _geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36 *from = (_geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36 *)_from;
    ::geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36 *to = (::geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36 *)_to;
    memcpy (*to, from, sizeof (*from));
}

void
__geometry_msgs_msg_dds__PoseWithCovariance___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__PoseWithCovariance_ *from = (struct _geometry_msgs_msg_dds__PoseWithCovariance_ *)_from;
    struct ::geometry_msgs::msg::dds_::PoseWithCovariance_ *to = (struct ::geometry_msgs::msg::dds_::PoseWithCovariance_ *)_to;
    {
        extern void __geometry_msgs_msg_dds__Pose___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Pose___copyOut((void *)&from->pose_, (void *)&to->pose_);
    }
    {
        extern void __geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36__copyOut(void *, void *);
        __geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36__copyOut((void *)&from->covariance_, (void *)&to->covariance_);
    }
}

