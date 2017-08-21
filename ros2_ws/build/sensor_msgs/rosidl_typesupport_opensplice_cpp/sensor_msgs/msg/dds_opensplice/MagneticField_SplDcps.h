#ifndef MAGNETICFIELD_SPLTYPES_H
#define MAGNETICFIELD_SPLTYPES_H

#include "ccpp_MagneticField_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Vector3_SplDcps.h"

extern c_metaObject __MagneticField__sensor_msgs__load (c_base base);

extern c_metaObject __MagneticField__sensor_msgs_msg__load (c_base base);

extern c_metaObject __MagneticField__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__sensor_msgs__MagneticField__double_array_9__load (c_base base);
typedef c_double _sensor_msgs_msg_dds__sensor_msgs__MagneticField__double_array_9[9];

extern c_metaObject __sensor_msgs_msg_dds__MagneticField___load (c_base base);
extern const char * __sensor_msgs_msg_dds__MagneticField___keys (void);
extern const char * __sensor_msgs_msg_dds__MagneticField___name (void);
struct _sensor_msgs_msg_dds__MagneticField_ ;
extern  c_bool __sensor_msgs_msg_dds__MagneticField___copyIn(c_base base, struct sensor_msgs::msg::dds_::MagneticField_ *from, struct _sensor_msgs_msg_dds__MagneticField_ *to);
extern  void __sensor_msgs_msg_dds__MagneticField___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__MagneticField_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Vector3_ magnetic_field_;
    _sensor_msgs_msg_dds__sensor_msgs__MagneticField__double_array_9 magnetic_field_covariance_;
};

#endif
