#include "Quaternion_SplDcps.h"
#include "ccpp_Quaternion_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__Quaternion___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::Quaternion_";
}

const char *
__geometry_msgs_msg_dds__Quaternion___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__Quaternion___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::Quaternion_ *from,
    struct _geometry_msgs_msg_dds__Quaternion_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->x_ = (c_double)from->x_;
    to->y_ = (c_double)from->y_;
    to->z_ = (c_double)from->z_;
    to->w_ = (c_double)from->w_;
    return result;
}

void
__geometry_msgs_msg_dds__Quaternion___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__Quaternion_ *from = (struct _geometry_msgs_msg_dds__Quaternion_ *)_from;
    struct ::geometry_msgs::msg::dds_::Quaternion_ *to = (struct ::geometry_msgs::msg::dds_::Quaternion_ *)_to;
    to->x_ = (::DDS::Double)from->x_;
    to->y_ = (::DDS::Double)from->y_;
    to->z_ = (::DDS::Double)from->z_;
    to->w_ = (::DDS::Double)from->w_;
}

