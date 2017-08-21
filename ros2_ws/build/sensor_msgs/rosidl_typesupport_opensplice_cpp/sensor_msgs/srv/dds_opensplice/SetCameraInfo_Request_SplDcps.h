#ifndef SETCAMERAINFO_REQUEST_SPLTYPES_H
#define SETCAMERAINFO_REQUEST_SPLTYPES_H

#include "ccpp_SetCameraInfo_Request_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "CameraInfo_SplDcps.h"

extern c_metaObject __SetCameraInfo_Request__sensor_msgs__load (c_base base);

extern c_metaObject __SetCameraInfo_Request__sensor_msgs_srv__load (c_base base);

extern c_metaObject __SetCameraInfo_Request__sensor_msgs_srv_dds___load (c_base base);

extern c_metaObject __sensor_msgs_srv_dds__SetCameraInfo_Request___load (c_base base);
extern const char * __sensor_msgs_srv_dds__SetCameraInfo_Request___keys (void);
extern const char * __sensor_msgs_srv_dds__SetCameraInfo_Request___name (void);
struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ ;
extern  c_bool __sensor_msgs_srv_dds__SetCameraInfo_Request___copyIn(c_base base, struct sensor_msgs::srv::dds_::SetCameraInfo_Request_ *from, struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ *to);
extern  void __sensor_msgs_srv_dds__SetCameraInfo_Request___copyOut(void *_from, void *_to);
struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ {
    struct _sensor_msgs_msg_dds__CameraInfo_ camera_info_;
};

#endif
