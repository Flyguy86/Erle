#ifndef RTTESTRESULTS_SPLTYPES_H
#define RTTESTRESULTS_SPLTYPES_H

#include "ccpp_RttestResults_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "dds_dcps_builtintopicsSplDcps.h"
#include "JointCommand_SplDcps.h"
#include "JointState_SplDcps.h"

extern c_metaObject __RttestResults__pendulum_msgs__load (c_base base);

extern c_metaObject __RttestResults__pendulum_msgs_msg__load (c_base base);

extern c_metaObject __RttestResults__pendulum_msgs_msg_dds___load (c_base base);

extern c_metaObject __pendulum_msgs_msg_dds__RttestResults___load (c_base base);
extern const char * __pendulum_msgs_msg_dds__RttestResults___keys (void);
extern const char * __pendulum_msgs_msg_dds__RttestResults___name (void);
struct _pendulum_msgs_msg_dds__RttestResults_ ;
extern  c_bool __pendulum_msgs_msg_dds__RttestResults___copyIn(c_base base, struct pendulum_msgs::msg::dds_::RttestResults_ *from, struct _pendulum_msgs_msg_dds__RttestResults_ *to);
extern  void __pendulum_msgs_msg_dds__RttestResults___copyOut(void *_from, void *_to);
struct _pendulum_msgs_msg_dds__RttestResults_ {
    struct _DDS_Time_t stamp_;
    struct _pendulum_msgs_msg_dds__JointCommand_ command_;
    struct _pendulum_msgs_msg_dds__JointState_ state_;
    c_ulonglong cur_latency_;
    c_double mean_latency_;
    c_ulonglong min_latency_;
    c_ulonglong max_latency_;
    c_ulonglong minor_pagefaults_;
    c_ulonglong major_pagefaults_;
};

#endif
