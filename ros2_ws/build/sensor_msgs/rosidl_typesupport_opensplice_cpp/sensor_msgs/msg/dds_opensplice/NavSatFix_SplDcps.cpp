#include "NavSatFix_SplDcps.h"
#include "ccpp_NavSatFix_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__NavSatFix___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::NavSatFix_";
}

const char *
__sensor_msgs_msg_dds__NavSatFix___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9__copyIn(
    c_base base,
    ::sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9 *from,
    _sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9 *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    memcpy (to, *from, sizeof (*to));
    return result;
}

c_bool
__sensor_msgs_msg_dds__NavSatFix___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::NavSatFix_ *from,
    struct _sensor_msgs_msg_dds__NavSatFix_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __sensor_msgs_msg_dds__NavSatStatus___copyIn(c_base, ::sensor_msgs::msg::dds_::NavSatStatus_ *, _sensor_msgs_msg_dds__NavSatStatus_ *);
        result = __sensor_msgs_msg_dds__NavSatStatus___copyIn(base, &from->status_, &to->status_);
    }
    to->latitude_ = (c_double)from->latitude_;
    to->longitude_ = (c_double)from->longitude_;
    to->altitude_ = (c_double)from->altitude_;
    if(result){
        extern c_bool __sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9__copyIn(c_base, ::sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9 *, _sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9 *);
        result = __sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9__copyIn(base, &from->position_covariance_, &to->position_covariance_);
    }
    to->position_covariance_type_ = (c_octet)from->position_covariance_type_;
    return result;
}

void
__sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9__copyOut(
    void *_from,
    void *_to)
{
    _sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9 *from = (_sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9 *)_from;
    ::sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9 *to = (::sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9 *)_to;
    memcpy (*to, from, sizeof (*from));
}

void
__sensor_msgs_msg_dds__NavSatFix___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__NavSatFix_ *from = (struct _sensor_msgs_msg_dds__NavSatFix_ *)_from;
    struct ::sensor_msgs::msg::dds_::NavSatFix_ *to = (struct ::sensor_msgs::msg::dds_::NavSatFix_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __sensor_msgs_msg_dds__NavSatStatus___copyOut(void *, void *);
        __sensor_msgs_msg_dds__NavSatStatus___copyOut((void *)&from->status_, (void *)&to->status_);
    }
    to->latitude_ = (::DDS::Double)from->latitude_;
    to->longitude_ = (::DDS::Double)from->longitude_;
    to->altitude_ = (::DDS::Double)from->altitude_;
    {
        extern void __sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9__copyOut(void *, void *);
        __sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9__copyOut((void *)&from->position_covariance_, (void *)&to->position_covariance_);
    }
    to->position_covariance_type_ = (::DDS::Octet)from->position_covariance_type_;
}

