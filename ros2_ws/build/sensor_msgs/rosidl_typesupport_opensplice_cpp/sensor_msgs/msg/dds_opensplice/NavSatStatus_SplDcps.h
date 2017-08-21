#ifndef NAVSATSTATUS_SPLTYPES_H
#define NAVSATSTATUS_SPLTYPES_H

#include "ccpp_NavSatStatus_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __NavSatStatus__sensor_msgs__load (c_base base);

extern c_metaObject __NavSatStatus__sensor_msgs_msg__load (c_base base);

extern c_metaObject __NavSatStatus__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__NavSatStatus___load (c_base base);
extern const char * __sensor_msgs_msg_dds__NavSatStatus___keys (void);
extern const char * __sensor_msgs_msg_dds__NavSatStatus___name (void);
struct _sensor_msgs_msg_dds__NavSatStatus_ ;
extern  c_bool __sensor_msgs_msg_dds__NavSatStatus___copyIn(c_base base, struct sensor_msgs::msg::dds_::NavSatStatus_ *from, struct _sensor_msgs_msg_dds__NavSatStatus_ *to);
extern  void __sensor_msgs_msg_dds__NavSatStatus___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__NavSatStatus_ {
    c_octet status_;
    c_ushort service_;
};

#endif
