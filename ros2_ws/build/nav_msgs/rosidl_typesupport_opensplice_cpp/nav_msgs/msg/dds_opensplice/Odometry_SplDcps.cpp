#include "Odometry_SplDcps.h"
#include "ccpp_Odometry_.h"
#include "dds_type_aliases.h"

const char *
__nav_msgs_msg_dds__Odometry___name(void)
{
    return (const char*)"nav_msgs::msg::dds_::Odometry_";
}

const char *
__nav_msgs_msg_dds__Odometry___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__nav_msgs_msg_dds__Odometry___copyIn(
    c_base base,
    struct ::nav_msgs::msg::dds_::Odometry_ *from,
    struct _nav_msgs_msg_dds__Odometry_ *to)
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
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'nav_msgs::msg::dds_::Odometry_.child_frame_id_' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->child_frame_id_ = c_stringNew(base, from->child_frame_id_);
#endif
    if(result){
        extern c_bool __geometry_msgs_msg_dds__PoseWithCovariance___copyIn(c_base, ::geometry_msgs::msg::dds_::PoseWithCovariance_ *, _geometry_msgs_msg_dds__PoseWithCovariance_ *);
        result = __geometry_msgs_msg_dds__PoseWithCovariance___copyIn(base, &from->pose_, &to->pose_);
    }
    if(result){
        extern c_bool __geometry_msgs_msg_dds__TwistWithCovariance___copyIn(c_base, ::geometry_msgs::msg::dds_::TwistWithCovariance_ *, _geometry_msgs_msg_dds__TwistWithCovariance_ *);
        result = __geometry_msgs_msg_dds__TwistWithCovariance___copyIn(base, &from->twist_, &to->twist_);
    }
    return result;
}

void
__nav_msgs_msg_dds__Odometry___copyOut(
    void *_from,
    void *_to)
{
    struct _nav_msgs_msg_dds__Odometry_ *from = (struct _nav_msgs_msg_dds__Odometry_ *)_from;
    struct ::nav_msgs::msg::dds_::Odometry_ *to = (struct ::nav_msgs::msg::dds_::Odometry_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    to->child_frame_id_ = DDS::string_dup(from->child_frame_id_ ? from->child_frame_id_ : "");
    {
        extern void __geometry_msgs_msg_dds__PoseWithCovariance___copyOut(void *, void *);
        __geometry_msgs_msg_dds__PoseWithCovariance___copyOut((void *)&from->pose_, (void *)&to->pose_);
    }
    {
        extern void __geometry_msgs_msg_dds__TwistWithCovariance___copyOut(void *, void *);
        __geometry_msgs_msg_dds__TwistWithCovariance___copyOut((void *)&from->twist_, (void *)&to->twist_);
    }
}

