#ifndef POLYGON_SPLTYPES_H
#define POLYGON_SPLTYPES_H

#include "ccpp_Polygon_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Point32_SplDcps.h"

extern c_metaObject __Polygon__geometry_msgs__load (c_base base);

extern c_metaObject __Polygon__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Polygon__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Polygon___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Polygon___keys (void);
extern const char * __geometry_msgs_msg_dds__Polygon___name (void);
struct _geometry_msgs_msg_dds__Polygon_ ;
extern  c_bool __geometry_msgs_msg_dds__Polygon___copyIn(c_base base, struct geometry_msgs::msg::dds_::Polygon_ *from, struct _geometry_msgs_msg_dds__Polygon_ *to);
extern  void __geometry_msgs_msg_dds__Polygon___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Polygon_ {
    c_sequence points_;
};

#endif
