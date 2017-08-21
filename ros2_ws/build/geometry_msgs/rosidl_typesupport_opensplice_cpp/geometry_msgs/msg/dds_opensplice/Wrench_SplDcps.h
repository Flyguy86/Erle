#ifndef WRENCH_SPLTYPES_H
#define WRENCH_SPLTYPES_H

#include "ccpp_Wrench_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Vector3_SplDcps.h"

extern c_metaObject __Wrench__geometry_msgs__load (c_base base);

extern c_metaObject __Wrench__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Wrench__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Wrench___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Wrench___keys (void);
extern const char * __geometry_msgs_msg_dds__Wrench___name (void);
struct _geometry_msgs_msg_dds__Wrench_ ;
extern  c_bool __geometry_msgs_msg_dds__Wrench___copyIn(c_base base, struct geometry_msgs::msg::dds_::Wrench_ *from, struct _geometry_msgs_msg_dds__Wrench_ *to);
extern  void __geometry_msgs_msg_dds__Wrench___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Wrench_ {
    struct _geometry_msgs_msg_dds__Vector3_ force_;
    struct _geometry_msgs_msg_dds__Vector3_ torque_;
};

#endif
