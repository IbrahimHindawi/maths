#ifndef __M_VEC_H__
#define __M_VEC_H__

#include "stdtype.h"

/*
typedef union {
    struct {
        f32 x;
        f32 y;
    };
    f32 c[2];
} v2f32;
*/
typedef union {
    struct {
        f32 x;
        f32 y;
        f32 z;
    };
    f32 c[3];
} v3f32;
v3f32 v3f32_create(f32 x, f32 y, f32 z);
/* vec vec ops */
v3f32 v3f32_add_v3f32(v3f32 a, v3f32 b);
v3f32 v3f32_sub_v3f32(v3f32 a, v3f32 b);
v3f32 v3f32_mul_v3f32(v3f32 a, v3f32 b);
v3f32 v3f32_div_v3f32(v3f32 a, v3f32 b);
/* vec scalar ops */
v3f32 v3f32_add_f32(v3f32 v, f32 s);
v3f32 v3f32_mul_f32(v3f32 v, f32 s);
v3f32 v3f32_div_f32(v3f32 v, f32 s);
v3f32 v3f32_normalize(v3f32 v);
/* vec special ops */
f32 v3f32_dot(v3f32 a, v3f32 b);
f32 v3f32_length(v3f32 v);
v3f32 v3f32_project(v3f32 a, v3f32 b);
v3f32 v3f32_reject(v3f32 a, v3f32 b);
void v3f32_print(v3f32 v);

#endif
