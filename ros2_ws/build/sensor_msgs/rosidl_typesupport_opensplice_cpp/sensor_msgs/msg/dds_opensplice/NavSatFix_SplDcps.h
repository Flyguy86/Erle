#ifndef NAVSATFIX_SPLTYPES_H
#define NAVSATFIX_SPLTYPES_H

#include "ccpp_NavSatFix_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "NavSatStatus_SplDcps.h"

extern c_metaObject __NavSatFix__sensor_msgs__load (c_base base);

extern c_metaObject __NavSatFix__sensor_msgs_msg__load (c_base base);

extern c_metaObject __NavSatFix__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9__load (c_base base);
typedef c_double _sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9[9];

extern c_metaObject __sensor_msgs_msg_dds__NavSatFix___load (c_base base);
extern const char * __sensor_msgs_msg_dds__NavSatFix___keys (void);
extern const char * __sensor_msgs_msg_dds__NavSatFix___name (void);
struct _sensor_msgs_msg_dds__NavSatFix_ ;
extern  c_bool __sensor_msgs_msg_dds__NavSatFix___copyIn(c_base base, struct sensor_msgs::msg::dds_::NavSatFix_ *from, struct _sensor_msgs_msg_dds__NavSatFix_ *to);
extern  void __sensor_msgs_msg_dds__NavSatFix___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__NavSatFix_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _sensor_msgs_msg_dds__NavSatStatus_ status_;
    c_double latitude_;
    c_double longitude_;
    c_double altitude_;
    _sensor_msgs_msg_dds__sensor_msgs__NavSatFix__double_array_9 position_covariance_;
    c_octet position_covariance_type_;
};

#endif
