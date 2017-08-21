#include "FluidPressure_SplDcps.h"
#include "ccpp_FluidPressure_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__FluidPressure___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::FluidPressure_";
}

const char *
__sensor_msgs_msg_dds__FluidPressure___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__FluidPressure___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::FluidPressure_ *from,
    struct _sensor_msgs_msg_dds__FluidPressure_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    to->fluid_pressure_ = (c_double)from->fluid_pressure_;
    to->variance_ = (c_double)from->variance_;
    return result;
}

void
__sensor_msgs_msg_dds__FluidPressure___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__FluidPressure_ *from = (struct _sensor_msgs_msg_dds__FluidPressure_ *)_from;
    struct ::sensor_msgs::msg::dds_::FluidPressure_ *to = (struct ::sensor_msgs::msg::dds_::FluidPressure_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    to->fluid_pressure_ = (::DDS::Double)from->fluid_pressure_;
    to->variance_ = (::DDS::Double)from->variance_;
}

