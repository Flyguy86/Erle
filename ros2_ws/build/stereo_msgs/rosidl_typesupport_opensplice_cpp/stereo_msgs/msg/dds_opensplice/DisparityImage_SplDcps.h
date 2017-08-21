#ifndef DISPARITYIMAGE_SPLTYPES_H
#define DISPARITYIMAGE_SPLTYPES_H

#include "ccpp_DisparityImage_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Image_SplDcps.h"
#include "RegionOfInterest_SplDcps.h"

extern c_metaObject __DisparityImage__stereo_msgs__load (c_base base);

extern c_metaObject __DisparityImage__stereo_msgs_msg__load (c_base base);

extern c_metaObject __DisparityImage__stereo_msgs_msg_dds___load (c_base base);

extern c_metaObject __stereo_msgs_msg_dds__DisparityImage___load (c_base base);
extern const char * __stereo_msgs_msg_dds__DisparityImage___keys (void);
extern const char * __stereo_msgs_msg_dds__DisparityImage___name (void);
struct _stereo_msgs_msg_dds__DisparityImage_ ;
extern  c_bool __stereo_msgs_msg_dds__DisparityImage___copyIn(c_base base, struct stereo_msgs::msg::dds_::DisparityImage_ *from, struct _stereo_msgs_msg_dds__DisparityImage_ *to);
extern  void __stereo_msgs_msg_dds__DisparityImage___copyOut(void *_from, void *_to);
struct _stereo_msgs_msg_dds__DisparityImage_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _sensor_msgs_msg_dds__Image_ image_;
    c_float f_;
    c_float t_;
    struct _sensor_msgs_msg_dds__RegionOfInterest_ valid_window_;
    c_float min_disparity_;
    c_float max_disparity_;
    c_float delta_d_;
};

#endif
