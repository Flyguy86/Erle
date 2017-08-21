#include "Point32_SplDcps.h"
#include "ccpp_Point32_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__Point32___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::Point32_";
}

const char *
__geometry_msgs_msg_dds__Point32___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__Point32___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::Point32_ *from,
    struct _geometry_msgs_msg_dds__Point32_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->x_ = (c_float)from->x_;
    to->y_ = (c_float)from->y_;
    to->z_ = (c_float)from->z_;
    return result;
}

void
__geometry_msgs_msg_dds__Point32___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__Point32_ *from = (struct _geometry_msgs_msg_dds__Point32_ *)_from;
    struct ::geometry_msgs::msg::dds_::Point32_ *to = (struct ::geometry_msgs::msg::dds_::Point32_ *)_to;
    to->x_ = (::DDS::Float)from->x_;
    to->y_ = (::DDS::Float)from->y_;
    to->z_ = (::DDS::Float)from->z_;
}

