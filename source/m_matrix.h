#ifndef                     __M_MATRIX_H__
#define                     __M_MATRIX_H__

#include "stdtype.h"
#include "m_vec.h"

typedef f32 m33[3][3];

void m33_set_f32(m33 matrix,
                 f32 m00, f32 m01, f32 m02,
                 f32 m10, f32 m11, f32 m12,
                 f32 m20, f32 m21, f32 m22);
void m33_set_v3f32(m33 m, v3f32 a, v3f32 b, v3f32 c); 
void m33_print(m33 matrix);
v3f32 m33_v3f32(m33 m, i32 row);
void m33_add_m33(m33 A, m33 B);
void m33_sub_m33(m33 A, m33 B);
void m33_mul_f32(m33 A, f32 s);
void m33_mul_m33(m33 R, m33 A, m33 B);
v3f32 m33_mul_v3f32(m33 A, v3f32 v);

#endif
