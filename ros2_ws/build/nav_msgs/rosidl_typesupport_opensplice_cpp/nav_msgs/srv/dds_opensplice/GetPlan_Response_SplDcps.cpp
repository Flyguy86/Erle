#include "GetPlan_Response_SplDcps.h"
#include "ccpp_GetPlan_Response_.h"
#include "dds_type_aliases.h"

const char *
__nav_msgs_srv_dds__GetPlan_Response___name(void)
{
    return (const char*)"nav_msgs::srv::dds_::GetPlan_Response_";
}

const char *
__nav_msgs_srv_dds__GetPlan_Response___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__nav_msgs_srv_dds__GetPlan_Response___copyIn(
    c_base base,
    struct ::nav_msgs::srv::dds_::GetPlan_Response_ *from,
    struct _nav_msgs_srv_dds__GetPlan_Response_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __nav_msgs_msg_dds__Path___copyIn(c_base, ::nav_msgs::msg::dds_::Path_ *, _nav_msgs_msg_dds__Path_ *);
        result = __nav_msgs_msg_dds__Path___copyIn(base, &from->plan_, &to->plan_);
    }
    return result;
}

void
__nav_msgs_srv_dds__GetPlan_Response___copyOut(
    void *_from,
    void *_to)
{
    struct _nav_msgs_srv_dds__GetPlan_Response_ *from = (struct _nav_msgs_srv_dds__GetPlan_Response_ *)_from;
    struct ::nav_msgs::srv::dds_::GetPlan_Response_ *to = (struct ::nav_msgs::srv::dds_::GetPlan_Response_ *)_to;
    {
        extern void __nav_msgs_msg_dds__Path___copyOut(void *, void *);
        __nav_msgs_msg_dds__Path___copyOut((void *)&from->plan_, (void *)&to->plan_);
    }
}

