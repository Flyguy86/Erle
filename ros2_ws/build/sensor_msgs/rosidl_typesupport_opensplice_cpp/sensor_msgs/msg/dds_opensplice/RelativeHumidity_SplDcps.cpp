#include "RelativeHumidity_SplDcps.h"
#include "ccpp_RelativeHumidity_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__RelativeHumidity___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::RelativeHumidity_";
}

const char *
__sensor_msgs_msg_dds__RelativeHumidity___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__RelativeHumidity___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::RelativeHumidity_ *from,
    struct _sensor_msgs_msg_dds__RelativeHumidity_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    to->relative_humidity_ = (c_double)from->relative_humidity_;
    to->variance_ = (c_double)from->variance_;
    return result;
}

void
__sensor_msgs_msg_dds__RelativeHumidity___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__RelativeHumidity_ *from = (struct _sensor_msgs_msg_dds__RelativeHumidity_ *)_from;
    struct ::sensor_msgs::msg::dds_::RelativeHumidity_ *to = (struct ::sensor_msgs::msg::dds_::RelativeHumidity_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    to->relative_humidity_ = (::DDS::Double)from->relative_humidity_;
    to->variance_ = (::DDS::Double)from->variance_;
}

