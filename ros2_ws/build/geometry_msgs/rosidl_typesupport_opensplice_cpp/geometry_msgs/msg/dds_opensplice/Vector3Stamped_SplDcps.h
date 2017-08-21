#ifndef VECTOR3STAMPED_SPLTYPES_H
#define VECTOR3STAMPED_SPLTYPES_H

#include "ccpp_Vector3Stamped_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Vector3_SplDcps.h"

extern c_metaObject __Vector3Stamped__geometry_msgs__load (c_base base);

extern c_metaObject __Vector3Stamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Vector3Stamped__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Vector3Stamped___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Vector3Stamped___keys (void);
extern const char * __geometry_msgs_msg_dds__Vector3Stamped___name (void);
struct _geometry_msgs_msg_dds__Vector3Stamped_ ;
extern  c_bool __geometry_msgs_msg_dds__Vector3Stamped___copyIn(c_base base, struct geometry_msgs::msg::dds_::Vector3Stamped_ *from, struct _geometry_msgs_msg_dds__Vector3Stamped_ *to);
extern  void __geometry_msgs_msg_dds__Vector3Stamped___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Vector3Stamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Vector3_ vector_;
};

#endif
