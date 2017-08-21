#ifndef JOINTSTATE_SPLTYPES_H
#define JOINTSTATE_SPLTYPES_H

#include "ccpp_JointState_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"

extern c_metaObject __JointState__sensor_msgs__load (c_base base);

extern c_metaObject __JointState__sensor_msgs_msg__load (c_base base);

extern c_metaObject __JointState__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__JointState___load (c_base base);
extern const char * __sensor_msgs_msg_dds__JointState___keys (void);
extern const char * __sensor_msgs_msg_dds__JointState___name (void);
struct _sensor_msgs_msg_dds__JointState_ ;
extern  c_bool __sensor_msgs_msg_dds__JointState___copyIn(c_base base, struct sensor_msgs::msg::dds_::JointState_ *from, struct _sensor_msgs_msg_dds__JointState_ *to);
extern  void __sensor_msgs_msg_dds__JointState___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__JointState_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence name_;
    c_sequence position_;
    c_sequence velocity_;
    c_sequence effort_;
};

#endif
