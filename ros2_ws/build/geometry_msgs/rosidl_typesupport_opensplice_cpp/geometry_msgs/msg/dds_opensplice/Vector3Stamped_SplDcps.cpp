#include "Vector3Stamped_SplDcps.h"
#include "ccpp_Vector3Stamped_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__Vector3Stamped___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::Vector3Stamped_";
}

const char *
__geometry_msgs_msg_dds__Vector3Stamped___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__Vector3Stamped___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::Vector3Stamped_ *from,
    struct _geometry_msgs_msg_dds__Vector3Stamped_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base, ::geometry_msgs::msg::dds_::Vector3_ *, _geometry_msgs_msg_dds__Vector3_ *);
        result = __geometry_msgs_msg_dds__Vector3___copyIn(base, &from->vector_, &to->vector_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__Vector3Stamped___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__Vector3Stamped_ *from = (struct _geometry_msgs_msg_dds__Vector3Stamped_ *)_from;
    struct ::geometry_msgs::msg::dds_::Vector3Stamped_ *to = (struct ::geometry_msgs::msg::dds_::Vector3Stamped_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __geometry_msgs_msg_dds__Vector3___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Vector3___copyOut((void *)&from->vector_, (void *)&to->vector_);
    }
}

