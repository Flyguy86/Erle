#include "Range_SplDcps.h"
#include "ccpp_Range_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__Range___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::Range_";
}

const char *
__sensor_msgs_msg_dds__Range___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__Range___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::Range_ *from,
    struct _sensor_msgs_msg_dds__Range_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    to->radiation_type_ = (c_octet)from->radiation_type_;
    to->field_of_view_ = (c_float)from->field_of_view_;
    to->min_range_ = (c_float)from->min_range_;
    to->max_range_ = (c_float)from->max_range_;
    to->range_ = (c_float)from->range_;
    return result;
}

void
__sensor_msgs_msg_dds__Range___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__Range_ *from = (struct _sensor_msgs_msg_dds__Range_ *)_from;
    struct ::sensor_msgs::msg::dds_::Range_ *to = (struct ::sensor_msgs::msg::dds_::Range_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    to->radiation_type_ = (::DDS::Octet)from->radiation_type_;
    to->field_of_view_ = (::DDS::Float)from->field_of_view_;
    to->min_range_ = (::DDS::Float)from->min_range_;
    to->max_range_ = (::DDS::Float)from->max_range_;
    to->range_ = (::DDS::Float)from->range_;
}

