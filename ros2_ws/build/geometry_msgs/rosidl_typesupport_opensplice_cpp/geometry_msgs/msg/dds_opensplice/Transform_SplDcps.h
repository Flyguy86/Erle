#ifndef TRANSFORM_SPLTYPES_H
#define TRANSFORM_SPLTYPES_H

#include "ccpp_Transform_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Vector3_SplDcps.h"
#include "Quaternion_SplDcps.h"

extern c_metaObject __Transform__geometry_msgs__load (c_base base);

extern c_metaObject __Transform__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Transform__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Transform___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Transform___keys (void);
extern const char * __geometry_msgs_msg_dds__Transform___name (void);
struct _geometry_msgs_msg_dds__Transform_ ;
extern  c_bool __geometry_msgs_msg_dds__Transform___copyIn(c_base base, struct geometry_msgs::msg::dds_::Transform_ *from, struct _geometry_msgs_msg_dds__Transform_ *to);
extern  void __geometry_msgs_msg_dds__Transform___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Transform_ {
    struct _geometry_msgs_msg_dds__Vector3_ translation_;
    struct _geometry_msgs_msg_dds__Quaternion_ rotation_;
};

#endif
