#include "TwistWithCovariance_SplDcps.h"
#include "ccpp_TwistWithCovariance_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__TwistWithCovariance___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::TwistWithCovariance_";
}

const char *
__geometry_msgs_msg_dds__TwistWithCovariance___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36__copyIn(
    c_base base,
    ::geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36 *from,
    _geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36 *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    memcpy (to, *from, sizeof (*to));
    return result;
}

c_bool
__geometry_msgs_msg_dds__TwistWithCovariance___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::TwistWithCovariance_ *from,
    struct _geometry_msgs_msg_dds__TwistWithCovariance_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __geometry_msgs_msg_dds__Twist___copyIn(c_base, ::geometry_msgs::msg::dds_::Twist_ *, _geometry_msgs_msg_dds__Twist_ *);
        result = __geometry_msgs_msg_dds__Twist___copyIn(base, &from->twist_, &to->twist_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36__copyIn(c_base, ::geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36 *, _geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36 *);
        result = __geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36__copyIn(base, &from->covariance_, &to->covariance_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36__copyOut(
    void *_from,
    void *_to)
{
    _geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36 *from = (_geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36 *)_from;
    ::geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36 *to = (::geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36 *)_to;
    memcpy (*to, from, sizeof (*from));
}

void
__geometry_msgs_msg_dds__TwistWithCovariance___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__TwistWithCovariance_ *from = (struct _geometry_msgs_msg_dds__TwistWithCovariance_ *)_from;
    struct ::geometry_msgs::msg::dds_::TwistWithCovariance_ *to = (struct ::geometry_msgs::msg::dds_::TwistWithCovariance_ *)_to;
    {
        extern void __geometry_msgs_msg_dds__Twist___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Twist___copyOut((void *)&from->twist_, (void *)&to->twist_);
    }
    {
        extern void __geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36__copyOut(void *, void *);
        __geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36__copyOut((void *)&from->covariance_, (void *)&to->covariance_);
    }
}

