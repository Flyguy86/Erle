#include "NavSatStatus_SplDcps.h"
#include "ccpp_NavSatStatus_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__NavSatStatus___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::NavSatStatus_";
}

const char *
__sensor_msgs_msg_dds__NavSatStatus___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__NavSatStatus___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::NavSatStatus_ *from,
    struct _sensor_msgs_msg_dds__NavSatStatus_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->status_ = (c_octet)from->status_;
    to->service_ = (c_ushort)from->service_;
    return result;
}

void
__sensor_msgs_msg_dds__NavSatStatus___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__NavSatStatus_ *from = (struct _sensor_msgs_msg_dds__NavSatStatus_ *)_from;
    struct ::sensor_msgs::msg::dds_::NavSatStatus_ *to = (struct ::sensor_msgs::msg::dds_::NavSatStatus_ *)_to;
    to->status_ = (::DDS::Octet)from->status_;
    to->service_ = (::DDS::UShort)from->service_;
}

