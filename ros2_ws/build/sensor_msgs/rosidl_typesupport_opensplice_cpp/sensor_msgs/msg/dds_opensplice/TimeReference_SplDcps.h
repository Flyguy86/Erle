#ifndef TIMEREFERENCE_SPLTYPES_H
#define TIMEREFERENCE_SPLTYPES_H

#include "ccpp_TimeReference_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "dds_dcps_builtintopicsSplDcps.h"

extern c_metaObject __TimeReference__sensor_msgs__load (c_base base);

extern c_metaObject __TimeReference__sensor_msgs_msg__load (c_base base);

extern c_metaObject __TimeReference__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__TimeReference___load (c_base base);
extern const char * __sensor_msgs_msg_dds__TimeReference___keys (void);
extern const char * __sensor_msgs_msg_dds__TimeReference___name (void);
struct _sensor_msgs_msg_dds__TimeReference_ ;
extern  c_bool __sensor_msgs_msg_dds__TimeReference___copyIn(c_base base, struct sensor_msgs::msg::dds_::TimeReference_ *from, struct _sensor_msgs_msg_dds__TimeReference_ *to);
extern  void __sensor_msgs_msg_dds__TimeReference___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__TimeReference_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _DDS_Time_t time_ref_;
    c_string source_;
};

#endif
