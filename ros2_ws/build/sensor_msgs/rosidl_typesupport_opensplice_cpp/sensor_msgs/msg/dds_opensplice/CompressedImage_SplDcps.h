#ifndef COMPRESSEDIMAGE_SPLTYPES_H
#define COMPRESSEDIMAGE_SPLTYPES_H

#include "ccpp_CompressedImage_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"

extern c_metaObject __CompressedImage__sensor_msgs__load (c_base base);

extern c_metaObject __CompressedImage__sensor_msgs_msg__load (c_base base);

extern c_metaObject __CompressedImage__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__CompressedImage___load (c_base base);
extern const char * __sensor_msgs_msg_dds__CompressedImage___keys (void);
extern const char * __sensor_msgs_msg_dds__CompressedImage___name (void);
struct _sensor_msgs_msg_dds__CompressedImage_ ;
extern  c_bool __sensor_msgs_msg_dds__CompressedImage___copyIn(c_base base, struct sensor_msgs::msg::dds_::CompressedImage_ *from, struct _sensor_msgs_msg_dds__CompressedImage_ *to);
extern  void __sensor_msgs_msg_dds__CompressedImage___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__CompressedImage_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_string format_;
    c_sequence data_;
};

#endif
