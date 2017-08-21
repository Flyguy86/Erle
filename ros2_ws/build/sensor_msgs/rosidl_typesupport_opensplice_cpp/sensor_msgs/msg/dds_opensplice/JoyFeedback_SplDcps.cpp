#include "JoyFeedback_SplDcps.h"
#include "ccpp_JoyFeedback_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__JoyFeedback___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::JoyFeedback_";
}

const char *
__sensor_msgs_msg_dds__JoyFeedback___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__JoyFeedback___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::JoyFeedback_ *from,
    struct _sensor_msgs_msg_dds__JoyFeedback_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->type_ = (c_octet)from->type_;
    to->id_ = (c_octet)from->id_;
    to->intensity_ = (c_float)from->intensity_;
    return result;
}

void
__sensor_msgs_msg_dds__JoyFeedback___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__JoyFeedback_ *from = (struct _sensor_msgs_msg_dds__JoyFeedback_ *)_from;
    struct ::sensor_msgs::msg::dds_::JoyFeedback_ *to = (struct ::sensor_msgs::msg::dds_::JoyFeedback_ *)_to;
    to->type_ = (::DDS::Octet)from->type_;
    to->id_ = (::DDS::Octet)from->id_;
    to->intensity_ = (::DDS::Float)from->intensity_;
}

