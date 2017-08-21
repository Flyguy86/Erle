#include "PointField_SplDcps.h"
#include "ccpp_PointField_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__PointField___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::PointField_";
}

const char *
__sensor_msgs_msg_dds__PointField___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__PointField___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::PointField_ *from,
    struct _sensor_msgs_msg_dds__PointField_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->name_){
        to->name_ = c_stringNew(base, from->name_);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'sensor_msgs::msg::dds_::PointField_.name_' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->name_ = c_stringNew(base, from->name_);
#endif
    to->offset_ = (c_ulong)from->offset_;
    to->datatype_ = (c_octet)from->datatype_;
    to->count_ = (c_ulong)from->count_;
    return result;
}

void
__sensor_msgs_msg_dds__PointField___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__PointField_ *from = (struct _sensor_msgs_msg_dds__PointField_ *)_from;
    struct ::sensor_msgs::msg::dds_::PointField_ *to = (struct ::sensor_msgs::msg::dds_::PointField_ *)_to;
    to->name_ = DDS::string_dup(from->name_ ? from->name_ : "");
    to->offset_ = (::DDS::ULong)from->offset_;
    to->datatype_ = (::DDS::Octet)from->datatype_;
    to->count_ = (::DDS::ULong)from->count_;
}

