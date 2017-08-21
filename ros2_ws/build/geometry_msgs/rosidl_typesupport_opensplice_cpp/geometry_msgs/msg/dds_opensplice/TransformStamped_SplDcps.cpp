#include "TransformStamped_SplDcps.h"
#include "ccpp_TransformStamped_.h"
#include "dds_type_aliases.h"

const char *
__geometry_msgs_msg_dds__TransformStamped___name(void)
{
    return (const char*)"geometry_msgs::msg::dds_::TransformStamped_";
}

const char *
__geometry_msgs_msg_dds__TransformStamped___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__geometry_msgs_msg_dds__TransformStamped___copyIn(
    c_base base,
    struct ::geometry_msgs::msg::dds_::TransformStamped_ *from,
    struct _geometry_msgs_msg_dds__TransformStamped_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
#ifdef OSPL_BOUNDS_CHECK
    if(from->child_frame_id_){
        to->child_frame_id_ = c_stringNew(base, from->child_frame_id_);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'geometry_msgs::msg::dds_::TransformStamped_.child_frame_id_' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->child_frame_id_ = c_stringNew(base, from->child_frame_id_);
#endif
    if(result){
        extern c_bool __geometry_msgs_msg_dds__Transform___copyIn(c_base, ::geometry_msgs::msg::dds_::Transform_ *, _geometry_msgs_msg_dds__Transform_ *);
        result = __geometry_msgs_msg_dds__Transform___copyIn(base, &from->transform_, &to->transform_);
    }
    return result;
}

void
__geometry_msgs_msg_dds__TransformStamped___copyOut(
    void *_from,
    void *_to)
{
    struct _geometry_msgs_msg_dds__TransformStamped_ *from = (struct _geometry_msgs_msg_dds__TransformStamped_ *)_from;
    struct ::geometry_msgs::msg::dds_::TransformStamped_ *to = (struct ::geometry_msgs::msg::dds_::TransformStamped_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    to->child_frame_id_ = DDS::string_dup(from->child_frame_id_ ? from->child_frame_id_ : "");
    {
        extern void __geometry_msgs_msg_dds__Transform___copyOut(void *, void *);
        __geometry_msgs_msg_dds__Transform___copyOut((void *)&from->transform_, (void *)&to->transform_);
    }
}

