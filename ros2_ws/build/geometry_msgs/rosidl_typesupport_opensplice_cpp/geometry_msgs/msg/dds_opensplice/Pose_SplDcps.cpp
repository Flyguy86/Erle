#include "Pose_SplDcps.h"
#include "ccpp_Pose_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__Pose___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::Pose_";
}

const char *
__geometry_msgs_msg_dds__Pose___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__Pose___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::Pose_ *from,
    struct _geometry_msgs_msg_dds__Pose_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __geometry_msgs_msg_dds__Point___copyIn(c_base, ::geometry_msgs::msg::dds_::Point_ *, _geometry_msgs_msg_dds__Point_ *);
        result = __geometry_msgs_msg_dds__Point___copyIn(base, &from->position_, &to->position_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Quaternion___copyIn(c_base, ::geometry_msgs::msg::dds_::Quaternion_ *, _geometry_msgs_msg_dds__Quaternion_ *);
        result = __geometry_msgs_msg_dds__Quaternion___copyIn(base, &from->orientation_, &to->orientation_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__Pose___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__Pose_ *from = (struct _geometry_msgs_msg_dds__Pose_ *)_from;
    struct ::geometry_msgs::msg::dds_::Pose_ *to = (struct ::geometry_msgs::msg::dds_::Pose_ *)_to;
    {
        extern void __geometry_msgs_msg_dds__Point___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Point___copyOut((void *)&from->position_, (void *)&to->position_);
    }
    {
        extern void __geometry_msgs_msg_dds__Quaternion___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Quaternion___copyOut((void *)&from->orientation_, (void *)&to->orientation_);
    }
}

