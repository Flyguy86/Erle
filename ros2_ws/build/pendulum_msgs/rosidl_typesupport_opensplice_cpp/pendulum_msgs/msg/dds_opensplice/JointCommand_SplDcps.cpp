#include "JointCommand_SplDcps.h"
#include "ccpp_JointCommand_.h"
#include "dds_type_aliases.h"

const char *
__pendulum_msgs_msg_dds__JointCommand___name(void)
{
    return (const char*)"pendulum_msgs::msg::dds_::JointCommand_";
}

const char *
__pendulum_msgs_msg_dds__JointCommand___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__pendulum_msgs_msg_dds__JointCommand___copyIn(
    c_base base,
    struct ::pendulum_msgs::msg::dds_::JointCommand_ *from,
    struct _pendulum_msgs_msg_dds__JointCommand_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    to->position_ = (c_double)from->position_;
    return result;
}

void
__pendulum_msgs_msg_dds__JointCommand___copyOut(
    void *_from,
    void *_to)
{
    struct _pendulum_msgs_msg_dds__JointCommand_ *from = (struct _pendulum_msgs_msg_dds__JointCommand_ *)_from;
    struct ::pendulum_msgs::msg::dds_::JointCommand_ *to = (struct ::pendulum_msgs::msg::dds_::JointCommand_ *)_to;
    to->position_ = (::DDS::Double)from->position_;
}

