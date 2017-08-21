#include "Temperature_SplDcps.h"
#include "ccpp_Temperature_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__Temperature___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::Temperature_";
}

const char *
__sensor_msgs_msg_dds__Temperature___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__Temperature___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::Temperature_ *from,
    struct _sensor_msgs_msg_dds__Temperature_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    to->temperature_ = (c_double)from->temperature_;
    to->variance_ = (c_double)from->variance_;
    return result;
}

void
__sensor_msgs_msg_dds__Temperature___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__Temperature_ *from = (struct _sensor_msgs_msg_dds__Temperature_ *)_from;
    struct ::sensor_msgs::msg::dds_::Temperature_ *to = (struct ::sensor_msgs::msg::dds_::Temperature_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    to->temperature_ = (::DDS::Double)from->temperature_;
    to->variance_ = (::DDS::Double)from->variance_;
}

