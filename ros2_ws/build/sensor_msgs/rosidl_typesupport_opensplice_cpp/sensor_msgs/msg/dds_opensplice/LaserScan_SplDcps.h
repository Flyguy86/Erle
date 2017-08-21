#ifndef LASERSCAN_SPLTYPES_H
#define LASERSCAN_SPLTYPES_H

#include "ccpp_LaserScan_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"

extern c_metaObject __LaserScan__sensor_msgs__load (c_base base);

extern c_metaObject __LaserScan__sensor_msgs_msg__load (c_base base);

extern c_metaObject __LaserScan__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__LaserScan___load (c_base base);
extern const char * __sensor_msgs_msg_dds__LaserScan___keys (void);
extern const char * __sensor_msgs_msg_dds__LaserScan___name (void);
struct _sensor_msgs_msg_dds__LaserScan_ ;
extern  c_bool __sensor_msgs_msg_dds__LaserScan___copyIn(c_base base, struct sensor_msgs::msg::dds_::LaserScan_ *from, struct _sensor_msgs_msg_dds__LaserScan_ *to);
extern  void __sensor_msgs_msg_dds__LaserScan___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__LaserScan_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_float angle_min_;
    c_float angle_max_;
    c_float angle_increment_;
    c_float time_increment_;
    c_float scan_time_;
    c_float range_min_;
    c_float range_max_;
    c_sequence ranges_;
    c_sequence intensities_;
};

#endif
