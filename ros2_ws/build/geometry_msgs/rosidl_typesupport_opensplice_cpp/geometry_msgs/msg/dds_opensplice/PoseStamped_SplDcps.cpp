#include "PoseStamped_SplDcps.h"
#include "ccpp_PoseStamped_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__PoseStamped___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::PoseStamped_";
}

const char *
__geometry_msgs_msg_dds__PoseStamped___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__PoseStamped___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::PoseStamped_ *from,
    struct _geometry_msgs_msg_dds__PoseStamped_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Pose___copyIn(c_base, ::geometry_msgs::msg::dds_::Pose_ *, _geometry_msgs_msg_dds__Pose_ *);
        result = __geometry_msgs_msg_dds__Pose___copyIn(base, &from->pose_, &to->pose_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__PoseStamped___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__PoseStamped_ *from = (struct _geometry_msgs_msg_dds__PoseStamped_ *)_from;
    struct ::geometry_msgs::msg::dds_::PoseStamped_ *to = (struct ::geometry_msgs::msg::dds_::PoseStamped_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __geometry_msgs_msg_dds__Pose___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Pose___copyOut((void *)&from->pose_, (void *)&to->pose_);
    }
}

