#ifndef VECTOR3_SPLTYPES_H
#define VECTOR3_SPLTYPES_H

#include "ccpp_Vector3_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __Vector3__geometry_msgs__load (c_base base);

extern c_metaObject __Vector3__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Vector3__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Vector3___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Vector3___keys (void);
extern const char * __geometry_msgs_msg_dds__Vector3___name (void);
struct _geometry_msgs_msg_dds__Vector3_ ;
extern  c_bool __geometry_msgs_msg_dds__Vector3___copyIn(c_base base, struct geometry_msgs::msg::dds_::Vector3_ *from, struct _geometry_msgs_msg_dds__Vector3_ *to);
extern  void __geometry_msgs_msg_dds__Vector3___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Vector3_ {
    c_double x_;
    c_double y_;
    c_double z_;
};

#endif
