#include "Wrench_SplDcps.h"
#include "ccpp_Wrench_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__Wrench___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::Wrench_";
}

const char *
__geometry_msgs_msg_dds__Wrench___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__Wrench___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::Wrench_ *from,
    struct _geometry_msgs_msg_dds__Wrench_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base, ::geometry_msgs::msg::dds_::Vector3_ *, _geometry_msgs_msg_dds__Vector3_ *);
        result = __geometry_msgs_msg_dds__Vector3___copyIn(base, &from->force_, &to->force_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base, ::geometry_msgs::msg::dds_::Vector3_ *, _geometry_msgs_msg_dds__Vector3_ *);
        result = __geometry_msgs_msg_dds__Vector3___copyIn(base, &from->torque_, &to->torque_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__Wrench___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__Wrench_ *from = (struct _geometry_msgs_msg_dds__Wrench_ *)_from;
    struct ::geometry_msgs::msg::dds_::Wrench_ *to = (struct ::geometry_msgs::msg::dds_::Wrench_ *)_to;
    {
        extern void __geometry_msgs_msg_dds__Vector3___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Vector3___copyOut((void *)&from->force_, (void *)&to->force_);
    }
    {
        extern void __geometry_msgs_msg_dds__Vector3___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Vector3___copyOut((void *)&from->torque_, (void *)&to->torque_);
    }
}

