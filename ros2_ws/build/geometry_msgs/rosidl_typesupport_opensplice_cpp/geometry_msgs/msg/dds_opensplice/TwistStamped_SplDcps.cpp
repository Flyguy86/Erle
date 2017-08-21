#include "TwistStamped_SplDcps.h"
#include "ccpp_TwistStamped_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__TwistStamped___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::TwistStamped_";
}

const char *
__geometry_msgs_msg_dds__TwistStamped___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__TwistStamped___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::TwistStamped_ *from,
    struct _geometry_msgs_msg_dds__TwistStamped_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Twist___copyIn(c_base, ::geometry_msgs::msg::dds_::Twist_ *, _geometry_msgs_msg_dds__Twist_ *);
        result = __geometry_msgs_msg_dds__Twist___copyIn(base, &from->twist_, &to->twist_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__TwistStamped___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__TwistStamped_ *from = (struct _geometry_msgs_msg_dds__TwistStamped_ *)_from;
    struct ::geometry_msgs::msg::dds_::TwistStamped_ *to = (struct ::geometry_msgs::msg::dds_::TwistStamped_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __geometry_msgs_msg_dds__Twist___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Twist___copyOut((void *)&from->twist_, (void *)&to->twist_);
    }
}

