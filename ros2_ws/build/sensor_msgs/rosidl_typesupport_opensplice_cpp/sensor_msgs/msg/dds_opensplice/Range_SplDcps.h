#ifndef RANGE_SPLTYPES_H
#define RANGE_SPLTYPES_H

#include "ccpp_Range_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"

extern c_metaObject __Range__sensor_msgs__load (c_base base);

extern c_metaObject __Range__sensor_msgs_msg__load (c_base base);

extern c_metaObject __Range__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__Range___load (c_base base);
extern const char * __sensor_msgs_msg_dds__Range___keys (void);
extern const char * __sensor_msgs_msg_dds__Range___name (void);
struct _sensor_msgs_msg_dds__Range_ ;
extern  c_bool __sensor_msgs_msg_dds__Range___copyIn(c_base base, struct sensor_msgs::msg::dds_::Range_ *from, struct _sensor_msgs_msg_dds__Range_ *to);
extern  void __sensor_msgs_msg_dds__Range___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__Range_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_octet radiation_type_;
    c_float field_of_view_;
    c_float min_range_;
    c_float max_range_;
    c_float range_;
};

#endif
