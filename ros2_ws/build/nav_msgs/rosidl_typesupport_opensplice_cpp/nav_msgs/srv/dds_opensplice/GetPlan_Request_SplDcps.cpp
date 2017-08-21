#include "GetPlan_Request_SplDcps.h"
#include "ccpp_GetPlan_Request_.h"
#include "dds_type_aliases.h"

const char *
__nav_msgs_srv_dds__GetPlan_Request___name(void)
{
    return (const char*)"nav_msgs::srv::dds_::GetPlan_Request_";
}

const char *
__nav_msgs_srv_dds__GetPlan_Request___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__nav_msgs_srv_dds__GetPlan_Request___copyIn(
    c_base base,
    struct ::nav_msgs::srv::dds_::GetPlan_Request_ *from,
    struct _nav_msgs_srv_dds__GetPlan_Request_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __geometry_msgs_msg_dds__PoseStamped___copyIn(c_base, ::geometry_msgs::msg::dds_::PoseStamped_ *, _geometry_msgs_msg_dds__PoseStamped_ *);
        result = __geometry_msgs_msg_dds__PoseStamped___copyIn(base, &from->start_, &to->start_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__PoseStamped___copyIn(c_base, ::geometry_msgs::msg::dds_::PoseStamped_ *, _geometry_msgs_msg_dds__PoseStamped_ *);
        result = __geometry_msgs_msg_dds__PoseStamped___copyIn(base, &from->goal_, &to->goal_);
    }
    to->tolerance_ = (c_float)from->tolerance_;
    return result;
}

void
__nav_msgs_srv_dds__GetPlan_Request___copyOut(
    void *_from,
    void *_to)
{
    struct _nav_msgs_srv_dds__GetPlan_Request_ *from = (struct _nav_msgs_srv_dds__GetPlan_Request_ *)_from;
    struct ::nav_msgs::srv::dds_::GetPlan_Request_ *to = (struct ::nav_msgs::srv::dds_::GetPlan_Request_ *)_to;
    {
        extern void __geometry_msgs_msg_dds__PoseStamped___copyOut(void *, void *);
        __geometry_msgs_msg_dds__PoseStamped___copyOut((void *)&from->start_, (void *)&to->start_);
    }
    {
        extern void __geometry_msgs_msg_dds__PoseStamped___copyOut(void *, void *);
        __geometry_msgs_msg_dds__PoseStamped___copyOut((void *)&from->goal_, (void *)&to->goal_);
    }
    to->tolerance_ = (::DDS::Float)from->tolerance_;
}

