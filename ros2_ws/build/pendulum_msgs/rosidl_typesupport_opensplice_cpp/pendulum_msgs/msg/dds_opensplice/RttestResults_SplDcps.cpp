#include "RttestResults_SplDcps.h"
#include "ccpp_RttestResults_.h"
#include "dds_type_aliases.h"

const char *
__pendulum_msgs_msg_dds__RttestResults___name(void)
{
    return (const char*)"pendulum_msgs::msg::dds_::RttestResults_";
}

const char *
__pendulum_msgs_msg_dds__RttestResults___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__pendulum_msgs_msg_dds__RttestResults___copyIn(
    c_base base,
    struct ::pendulum_msgs::msg::dds_::RttestResults_ *from,
    struct _pendulum_msgs_msg_dds__RttestResults_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __DDS_Time_t__copyIn(c_base, ::DDS::Time_t *, _DDS_Time_t *);
        result = __DDS_Time_t__copyIn(base, &from->stamp_, &to->stamp_);
    }
    if(result){
        extern c_bool __pendulum_msgs_msg_dds__JointCommand___copyIn(c_base, ::pendulum_msgs::msg::dds_::JointCommand_ *, _pendulum_msgs_msg_dds__JointCommand_ *);
        result = __pendulum_msgs_msg_dds__JointCommand___copyIn(base, &from->command_, &to->command_);
    }
    if(result){
        extern c_bool __pendulum_msgs_msg_dds__JointState___copyIn(c_base, ::pendulum_msgs::msg::dds_::JointState_ *, _pendulum_msgs_msg_dds__JointState_ *);
        result = __pendulum_msgs_msg_dds__JointState___copyIn(base, &from->state_, &to->state_);
    }
    to->cur_latency_ = (c_ulonglong)from->cur_latency_;
    to->mean_latency_ = (c_double)from->mean_latency_;
    to->min_latency_ = (c_ulonglong)from->min_latency_;
    to->max_latency_ = (c_ulonglong)from->max_latency_;
    to->minor_pagefaults_ = (c_ulonglong)from->minor_pagefaults_;
    to->major_pagefaults_ = (c_ulonglong)from->major_pagefaults_;
    return result;
}

void
__pendulum_msgs_msg_dds__RttestResults___copyOut(
    void *_from,
    void *_to)
{
    struct _pendulum_msgs_msg_dds__RttestResults_ *from = (struct _pendulum_msgs_msg_dds__RttestResults_ *)_from;
    struct ::pendulum_msgs::msg::dds_::RttestResults_ *to = (struct ::pendulum_msgs::msg::dds_::RttestResults_ *)_to;
    {
        extern void __DDS_Time_t__copyOut(void *, void *);
        __DDS_Time_t__copyOut((void *)&from->stamp_, (void *)&to->stamp_);
    }
    {
        extern void __pendulum_msgs_msg_dds__JointCommand___copyOut(void *, void *);
        __pendulum_msgs_msg_dds__JointCommand___copyOut((void *)&from->command_, (void *)&to->command_);
    }
    {
        extern void __pendulum_msgs_msg_dds__JointState___copyOut(void *, void *);
        __pendulum_msgs_msg_dds__JointState___copyOut((void *)&from->state_, (void *)&to->state_);
    }
    to->cur_latency_ = (::DDS::ULongLong)from->cur_latency_;
    to->mean_latency_ = (::DDS::Double)from->mean_latency_;
    to->min_latency_ = (::DDS::ULongLong)from->min_latency_;
    to->max_latency_ = (::DDS::ULongLong)from->max_latency_;
    to->minor_pagefaults_ = (::DDS::ULongLong)from->minor_pagefaults_;
    to->major_pagefaults_ = (::DDS::ULongLong)from->major_pagefaults_;
}

