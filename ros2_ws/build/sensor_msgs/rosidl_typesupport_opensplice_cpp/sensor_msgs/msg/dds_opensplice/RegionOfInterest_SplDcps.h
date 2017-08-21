#ifndef REGIONOFINTEREST_SPLTYPES_H
#define REGIONOFINTEREST_SPLTYPES_H

#include "ccpp_RegionOfInterest_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __RegionOfInterest__sensor_msgs__load (c_base base);

extern c_metaObject __RegionOfInterest__sensor_msgs_msg__load (c_base base);

extern c_metaObject __RegionOfInterest__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__RegionOfInterest___load (c_base base);
extern const char * __sensor_msgs_msg_dds__RegionOfInterest___keys (void);
extern const char * __sensor_msgs_msg_dds__RegionOfInterest___name (void);
struct _sensor_msgs_msg_dds__RegionOfInterest_ ;
extern  c_bool __sensor_msgs_msg_dds__RegionOfInterest___copyIn(c_base base, struct sensor_msgs::msg::dds_::RegionOfInterest_ *from, struct _sensor_msgs_msg_dds__RegionOfInterest_ *to);
extern  void __sensor_msgs_msg_dds__RegionOfInterest___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__RegionOfInterest_ {
    c_ulong x_offset_;
    c_ulong y_offset_;
    c_ulong height_;
    c_ulong width_;
    c_bool do_rectify_;
};

#endif
