#include "RegionOfInterest_SplDcps.h"
#include "ccpp_RegionOfInterest_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__RegionOfInterest___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::RegionOfInterest_";
}

const char *
__sensor_msgs_msg_dds__RegionOfInterest___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__RegionOfInterest___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::RegionOfInterest_ *from,
    struct _sensor_msgs_msg_dds__RegionOfInterest_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->x_offset_ = (c_ulong)from->x_offset_;
    to->y_offset_ = (c_ulong)from->y_offset_;
    to->height_ = (c_ulong)from->height_;
    to->width_ = (c_ulong)from->width_;
    to->do_rectify_ = (c_bool)from->do_rectify_;
    return result;
}

void
__sensor_msgs_msg_dds__RegionOfInterest___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__RegionOfInterest_ *from = (struct _sensor_msgs_msg_dds__RegionOfInterest_ *)_from;
    struct ::sensor_msgs::msg::dds_::RegionOfInterest_ *to = (struct ::sensor_msgs::msg::dds_::RegionOfInterest_ *)_to;
    to->x_offset_ = (::DDS::ULong)from->x_offset_;
    to->y_offset_ = (::DDS::ULong)from->y_offset_;
    to->height_ = (::DDS::ULong)from->height_;
    to->width_ = (::DDS::ULong)from->width_;
    to->do_rectify_ = (::DDS::Boolean)(from->do_rectify_ != 0);
}

