#include "LaserScan_SplDcps.h"
#include "ccpp_LaserScan_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__LaserScan___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::LaserScan_";
}

const char *
__sensor_msgs_msg_dds__LaserScan___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__LaserScan___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::LaserScan_ *from,
    struct _sensor_msgs_msg_dds__LaserScan_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    to->angle_min_ = (c_float)from->angle_min_;
    to->angle_max_ = (c_float)from->angle_max_;
    to->angle_increment_ = (c_float)from->angle_increment_;
    to->time_increment_ = (c_float)from->time_increment_;
    to->scan_time_ = (c_float)from->scan_time_;
    to->range_min_ = (c_float)from->range_min_;
    to->range_max_ = (c_float)from->range_max_;
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_float *dest0;
        ::sensor_msgs::msg::dds_::LaserScan_::_ranges__seq *src = &from->ranges_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_float"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_float>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_float *buf0;
            buf0 = (c_float *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->ranges_ = (c_sequence)dest0;
#else
        dest0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_float *buf0;
            buf0 = (c_float *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->ranges_ = (c_sequence)dest0;
#endif
    }
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_float *dest0;
        ::sensor_msgs::msg::dds_::LaserScan_::_intensities__seq *src = &from->intensities_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_float"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_float>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_float *buf0;
            buf0 = (c_float *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->intensities_ = (c_sequence)dest0;
#else
        dest0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_float *buf0;
            buf0 = (c_float *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->intensities_ = (c_sequence)dest0;
#endif
    }
    return result;
}

void
__sensor_msgs_msg_dds__LaserScan___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__LaserScan_ *from = (struct _sensor_msgs_msg_dds__LaserScan_ *)_from;
    struct ::sensor_msgs::msg::dds_::LaserScan_ *to = (struct ::sensor_msgs::msg::dds_::LaserScan_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    to->angle_min_ = (::DDS::Float)from->angle_min_;
    to->angle_max_ = (::DDS::Float)from->angle_max_;
    to->angle_increment_ = (::DDS::Float)from->angle_increment_;
    to->time_increment_ = (::DDS::Float)from->time_increment_;
    to->scan_time_ = (::DDS::Float)from->scan_time_;
    to->range_min_ = (::DDS::Float)from->range_min_;
    to->range_max_ = (::DDS::Float)from->range_max_;
    {
        long size0;
        c_float *src0 = (c_float *)from->ranges_;
        ::sensor_msgs::msg::dds_::LaserScan_::_ranges__seq *dst = &to->ranges_;

        size0 = c_arraySize(c_sequence(from->ranges_));
        to->ranges_.length(size0);
        {
            c_float *buf0;
            buf0 = (c_float *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
    {
        long size0;
        c_float *src0 = (c_float *)from->intensities_;
        ::sensor_msgs::msg::dds_::LaserScan_::_intensities__seq *dst = &to->intensities_;

        size0 = c_arraySize(c_sequence(from->intensities_));
        to->intensities_.length(size0);
        {
            c_float *buf0;
            buf0 = (c_float *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
}

