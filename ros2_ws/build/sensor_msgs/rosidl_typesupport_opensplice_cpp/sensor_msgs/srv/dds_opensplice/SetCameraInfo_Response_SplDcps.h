#ifndef SETCAMERAINFO_RESPONSE_SPLTYPES_H
#define SETCAMERAINFO_RESPONSE_SPLTYPES_H

#include "ccpp_SetCameraInfo_Response_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __SetCameraInfo_Response__sensor_msgs__load (c_base base);

extern c_metaObject __SetCameraInfo_Response__sensor_msgs_srv__load (c_base base);

extern c_metaObject __SetCameraInfo_Response__sensor_msgs_srv_dds___load (c_base base);

extern c_metaObject __sensor_msgs_srv_dds__SetCameraInfo_Response___load (c_base base);
extern const char * __sensor_msgs_srv_dds__SetCameraInfo_Response___keys (void);
extern const char * __sensor_msgs_srv_dds__SetCameraInfo_Response___name (void);
struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ ;
extern  c_bool __sensor_msgs_srv_dds__SetCameraInfo_Response___copyIn(c_base base, struct sensor_msgs::srv::dds_::SetCameraInfo_Response_ *from, struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ *to);
extern  void __sensor_msgs_srv_dds__SetCameraInfo_Response___copyOut(void *_from, void *_to);
struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ {
    c_bool success_;
    c_string status_message_;
};

#endif
