#ifndef POINTCLOUD_SPLTYPES_H
#define POINTCLOUD_SPLTYPES_H

#include "ccpp_PointCloud_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Point32_SplDcps.h"
#include "ChannelFloat32_SplDcps.h"

extern c_metaObject __PointCloud__sensor_msgs__load (c_base base);

extern c_metaObject __PointCloud__sensor_msgs_msg__load (c_base base);

extern c_metaObject __PointCloud__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__PointCloud___load (c_base base);
extern const char * __sensor_msgs_msg_dds__PointCloud___keys (void);
extern const char * __sensor_msgs_msg_dds__PointCloud___name (void);
struct _sensor_msgs_msg_dds__PointCloud_ ;
extern  c_bool __sensor_msgs_msg_dds__PointCloud___copyIn(c_base base, struct sensor_msgs::msg::dds_::PointCloud_ *from, struct _sensor_msgs_msg_dds__PointCloud_ *to);
extern  void __sensor_msgs_msg_dds__PointCloud___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__PointCloud_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence points_;
    c_sequence channels_;
};

#endif
