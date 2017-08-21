#include "Transform_SplDcps.h"
#include "ccpp_Transform_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__Transform___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::Transform_";
}

const char *
__geometry_msgs_msg_dds__Transform___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__Transform___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::Transform_ *from,
    struct _geometry_msgs_msg_dds__Transform_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base, ::geometry_msgs::msg::dds_::Vector3_ *, _geometry_msgs_msg_dds__Vector3_ *);
        result = __geometry_msgs_msg_dds__Vector3___copyIn(base, &from->translation_, &to->translation_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Quaternion___copyIn(c_base, ::geometry_msgs::msg::dds_::Quaternion_ *, _geometry_msgs_msg_dds__Quaternion_ *);
        result = __geometry_msgs_msg_dds__Quaternion___copyIn(base, &from->rotation_, &to->rotation_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__Transform___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__Transform_ *from = (struct _geometry_msgs_msg_dds__Transform_ *)_from;
    struct ::geometry_msgs::msg::dds_::Transform_ *to = (struct ::geometry_msgs::msg::dds_::Transform_ *)_to;
    {
        extern void __geometry_msgs_msg_dds__Vector3___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Vector3___copyOut((void *)&from->translation_, (void *)&to->translation_);
    }
    {
        extern void __geometry_msgs_msg_dds__Quaternion___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Quaternion___copyOut((void *)&from->rotation_, (void *)&to->rotation_);
    }
}

