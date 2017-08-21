#include "DisparityImage_SplDcps.h"
#include "ccpp_DisparityImage_.h"
#include "dds_type_aliases.h"

const char *
__stereo_msgs_msg_dds__DisparityImage___name(void)
{
    return (const char*)"stereo_msgs::msg::dds_::DisparityImage_";
}

const char *
__stereo_msgs_msg_dds__DisparityImage___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__stereo_msgs_msg_dds__DisparityImage___copyIn(
    c_base base,
    struct ::stereo_msgs::msg::dds_::DisparityImage_ *from,
    struct _stereo_msgs_msg_dds__DisparityImage_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    if(result){
        extern c_bool __sensor_msgs_msg_dds__Image___copyIn(c_base, ::sensor_msgs::msg::dds_::Image_ *, _sensor_msgs_msg_dds__Image_ *);
        result = __sensor_msgs_msg_dds__Image___copyIn(base, &from->image_, &to->image_);
    }
    to->f_ = (c_float)from->f_;
    to->t_ = (c_float)from->t_;
    if(result){
        extern c_bool __sensor_msgs_msg_dds__RegionOfInterest___copyIn(c_base, ::sensor_msgs::msg::dds_::RegionOfInterest_ *, _sensor_msgs_msg_dds__RegionOfInterest_ *);
        result = __sensor_msgs_msg_dds__RegionOfInterest___copyIn(base, &from->valid_window_, &to->valid_window_);
    }
    to->min_disparity_ = (c_float)from->min_disparity_;
    to->max_disparity_ = (c_float)from->max_disparity_;
    to->delta_d_ = (c_float)from->delta_d_;
    return result;
}

void
__stereo_msgs_msg_dds__DisparityImage___copyOut(
    void *_from,
    void *_to)
{
    struct _stereo_msgs_msg_dds__DisparityImage_ *from = (struct _stereo_msgs_msg_dds__DisparityImage_ *)_from;
    struct ::stereo_msgs::msg::dds_::DisparityImage_ *to = (struct ::stereo_msgs::msg::dds_::DisparityImage_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    {
        extern void __sensor_msgs_msg_dds__Image___copyOut(void *, void *);
        __sensor_msgs_msg_dds__Image___copyOut((void *)&from->image_, (void *)&to->image_);
    }
    to->f_ = (::DDS::Float)from->f_;
    to->t_ = (::DDS::Float)from->t_;
    {
        extern void __sensor_msgs_msg_dds__RegionOfInterest___copyOut(void *, void *);
        __sensor_msgs_msg_dds__RegionOfInterest___copyOut((void *)&from->valid_window_, (void *)&to->valid_window_);
    }
    to->min_disparity_ = (::DDS::Float)from->min_disparity_;
    to->max_disparity_ = (::DDS::Float)from->max_disparity_;
    to->delta_d_ = (::DDS::Float)from->delta_d_;
}

