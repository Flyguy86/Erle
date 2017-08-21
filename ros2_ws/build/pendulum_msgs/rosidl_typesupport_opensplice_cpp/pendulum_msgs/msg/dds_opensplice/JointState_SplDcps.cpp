#include "JointState_SplDcps.h"
#include "ccpp_JointState_.h"
#include "dds_type_aliases.h"

const char *
__pendulum_msgs_msg_dds__JointState___name(void)
{
    return (const char*)"pendulum_msgs::msg::dds_::JointState_";
}

const char *
__pendulum_msgs_msg_dds__JointState___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__pendulum_msgs_msg_dds__JointState___copyIn(
    c_base base,
    struct ::pendulum_msgs::msg::dds_::JointState_ *from,
    struct _pendulum_msgs_msg_dds__JointState_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->position_ = (c_double)from->position_;
    to->velocity_ = (c_double)from->velocity_;
    to->effort_ = (c_double)from->effort_;
    return result;
}

void
__pendulum_msgs_msg_dds__JointState___copyOut(
    void *_from,
    void *_to)
{
    struct _pendulum_msgs_msg_dds__JointState_ *from = (struct _pendulum_msgs_msg_dds__JointState_ *)_from;
    struct ::pendulum_msgs::msg::dds_::JointState_ *to = (struct ::pendulum_msgs::msg::dds_::JointState_ *)_to;
    to->position_ = (::DDS::Double)from->position_;
    to->velocity_ = (::DDS::Double)from->velocity_;
    to->effort_ = (::DDS::Double)from->effort_;
}

