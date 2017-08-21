#ifndef GRIDCELLS_SPLTYPES_H
#define GRIDCELLS_SPLTYPES_H

#include "ccpp_GridCells_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Point_SplDcps.h"

extern c_metaObject __GridCells__nav_msgs__load (c_base base);

extern c_metaObject __GridCells__nav_msgs_msg__load (c_base base);

extern c_metaObject __GridCells__nav_msgs_msg_dds___load (c_base base);

extern c_metaObject __nav_msgs_msg_dds__GridCells___load (c_base base);
extern const char * __nav_msgs_msg_dds__GridCells___keys (void);
extern const char * __nav_msgs_msg_dds__GridCells___name (void);
struct _nav_msgs_msg_dds__GridCells_ ;
extern  c_bool __nav_msgs_msg_dds__GridCells___copyIn(c_base base, struct nav_msgs::msg::dds_::GridCells_ *from, struct _nav_msgs_msg_dds__GridCells_ *to);
extern  void __nav_msgs_msg_dds__GridCells___copyOut(void *_from, void *_to);
struct _nav_msgs_msg_dds__GridCells_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_float cell_width_;
    c_float cell_height_;
    c_sequence cells_;
};

#endif
