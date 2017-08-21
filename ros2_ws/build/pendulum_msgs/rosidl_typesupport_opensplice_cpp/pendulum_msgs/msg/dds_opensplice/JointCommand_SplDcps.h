#ifndef JOINTCOMMAND_SPLTYPES_H
#define JOINTCOMMAND_SPLTYPES_H

#include "ccpp_JointCommand_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __JointCommand__pendulum_msgs__load (c_base base);

extern c_metaObject __JointCommand__pendulum_msgs_msg__load (c_base base);

extern c_metaObject __JointCommand__pendulum_msgs_msg_dds___load (c_base base);

extern c_metaObject __pendulum_msgs_msg_dds__JointCommand___load (c_base base);
extern const char * __pendulum_msgs_msg_dds__JointCommand___keys (void);
extern const char * __pendulum_msgs_msg_dds__JointCommand___name (void);
struct _pendulum_msgs_msg_dds__JointCommand_ ;
extern  c_bool __pendulum_msgs_msg_dds__JointCommand___copyIn(c_base base, struct pendulum_msgs::msg::dds_::JointCommand_ *from, struct _pendulum_msgs_msg_dds__JointCommand_ *to);
extern  void __pendulum_msgs_msg_dds__JointCommand___copyOut(void *_from, void *_to);
struct _pendulum_msgs_msg_dds__JointCommand_ {
    c_double position_;
};

#endif
