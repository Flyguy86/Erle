#ifndef JOINTSTATE_SPLTYPES_H
#define JOINTSTATE_SPLTYPES_H

#include "ccpp_JointState_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __JointState__pendulum_msgs__load (c_base base);

extern c_metaObject __JointState__pendulum_msgs_msg__load (c_base base);

extern c_metaObject __JointState__pendulum_msgs_msg_dds___load (c_base base);

extern c_metaObject __pendulum_msgs_msg_dds__JointState___load (c_base base);
extern const char * __pendulum_msgs_msg_dds__JointState___keys (void);
extern const char * __pendulum_msgs_msg_dds__JointState___name (void);
struct _pendulum_msgs_msg_dds__JointState_ ;
extern  c_bool __pendulum_msgs_msg_dds__JointState___copyIn(c_base base, struct pendulum_msgs::msg::dds_::JointState_ *from, struct _pendulum_msgs_msg_dds__JointState_ *to);
extern  void __pendulum_msgs_msg_dds__JointState___copyOut(void *_from, void *_to);
struct _pendulum_msgs_msg_dds__JointState_ {
    c_double position_;
    c_double velocity_;
    c_double effort_;
};

#endif
