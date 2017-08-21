#ifndef POINTCLOUD2_SPLTYPES_H
#define POINTCLOUD2_SPLTYPES_H

#include "ccpp_PointCloud2_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "PointField_SplDcps.h"

extern c_metaObject __PointCloud2__sensor_msgs__load (c_base base);

extern c_metaObject __PointCloud2__sensor_msgs_msg__load (c_base base);

extern c_metaObject __PointCloud2__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__PointCloud2___load (c_base base);
extern const char * __sensor_msgs_msg_dds__PointCloud2___keys (void);
extern const char * __sensor_msgs_msg_dds__PointCloud2___name (void);
struct _sensor_msgs_msg_dds__PointCloud2_ ;
extern  c_bool __sensor_msgs_msg_dds__PointCloud2___copyIn(c_base base, struct sensor_msgs::msg::dds_::PointCloud2_ *from, struct _sensor_msgs_msg_dds__PointCloud2_ *to);
extern  void __sensor_msgs_msg_dds__PointCloud2___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__PointCloud2_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_ulong height_;
    c_ulong width_;
    c_sequence fields_;
    c_bool is_bigendian_;
    c_ulong point_step_;
    c_ulong row_step_;
    c_sequence data_;
    c_bool is_dense_;
};

#endif
