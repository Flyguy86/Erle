#include "Twist_SplDcps.h"
#include "ccpp_Twist_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__Twist___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::Twist_";
}

const char *
__geometry_msgs_msg_dds__Twist___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__Twist___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::Twist_ *from,
    struct _geometry_msgs_msg_dds__Twist_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base, ::geometry_msgs::msg::dds_::Vector3_ *, _geometry_msgs_msg_dds__Vector3_ *);
        result = __geometry_msgs_msg_dds__Vector3___copyIn(base, &from->linear_, &to->linear_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base, ::geometry_msgs::msg::dds_::Vector3_ *, _geometry_msgs_msg_dds__Vector3_ *);
        result = __geometry_msgs_msg_dds__Vector3___copyIn(base, &from->angular_, &to->angular_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__Twist___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__Twist_ *from = (struct _geometry_msgs_msg_dds__Twist_ *)_from;
    struct ::geometry_msgs::msg::dds_::Twist_ *to = (struct ::geometry_msgs::msg::dds_::Twist_ *)_to;
    {
        extern void __geometry_msgs_msg_dds__Vector3___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Vector3___copyOut((void *)&from->linear_, (void *)&to->linear_);
    }
    {
        extern void __geometry_msgs_msg_dds__Vector3___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Vector3___copyOut((void *)&from->angular_, (void *)&to->angular_);
    }
}

