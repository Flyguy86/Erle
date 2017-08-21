#include "Pose2D_SplDcps.h"
#include "ccpp_Pose2D_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__Pose2D___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::Pose2D_";
}

const char *
__geometry_msgs_msg_dds__Pose2D___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__Pose2D___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::Pose2D_ *from,
    struct _geometry_msgs_msg_dds__Pose2D_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->x_ = (c_double)from->x_;
    to->y_ = (c_double)from->y_;
    to->theta_ = (c_double)from->theta_;
    return result;
}

void
__geometry_msgs_msg_dds__Pose2D___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__Pose2D_ *from = (struct _geometry_msgs_msg_dds__Pose2D_ *)_from;
    struct ::geometry_msgs::msg::dds_::Pose2D_ *to = (struct ::geometry_msgs::msg::dds_::Pose2D_ *)_to;
    to->x_ = (::DDS::Double)from->x_;
    to->y_ = (::DDS::Double)from->y_;
    to->theta_ = (::DDS::Double)from->theta_;
}

