#ifndef MULTIDOFJOINTSTATE_SPLTYPES_H
#define MULTIDOFJOINTSTATE_SPLTYPES_H

#include "ccpp_MultiDOFJointState_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Transform_SplDcps.h"
#include "Twist_SplDcps.h"
#include "Wrench_SplDcps.h"

extern c_metaObject __MultiDOFJointState__sensor_msgs__load (c_base base);

extern c_metaObject __MultiDOFJointState__sensor_msgs_msg__load (c_base base);

extern c_metaObject __MultiDOFJointState__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__MultiDOFJointState___load (c_base base);
extern const char * __sensor_msgs_msg_dds__MultiDOFJointState___keys (void);
extern const char * __sensor_msgs_msg_dds__MultiDOFJointState___name (void);
struct _sensor_msgs_msg_dds__MultiDOFJointState_ ;
extern  c_bool __sensor_msgs_msg_dds__MultiDOFJointState___copyIn(c_base base, struct sensor_msgs::msg::dds_::MultiDOFJointState_ *from, struct _sensor_msgs_msg_dds__MultiDOFJointState_ *to);
extern  void __sensor_msgs_msg_dds__MultiDOFJointState___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__MultiDOFJointState_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence joint_names_;
    c_sequence transforms_;
    c_sequence twist_;
    c_sequence wrench_;
};

#endif
