#include <math.h>
#include "m_vec.h"

v3f32 v3f32_create(f32 x, f32 y, f32 z) {
    v3f32 result = {0};
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}
v3f32 v3f32_add_v3f32(v3f32 a, v3f32 b){
    v3f32 result = {a.x + b.x, a.y + b.y, a.z + b.z};
    return result;
}
v3f32 v3f32_sub_v3f32(v3f32 a, v3f32 b){
    v3f32 result = {a.x - b.x, a.y - b.y, a.z - b.z};
    return result;
}
v3f32 v3f32_mul_v3f32(v3f32 a, v3f32 b){
    v3f32 result = {a.x * b.x, a.y * b.y, a.z * b.z};
    return result;
}
v3f32 v3f32_div_v3f32(v3f32 a, v3f32 b){
    v3f32 result = {a.x / b.x, a.y / b.y, a.z / b.z};
    return result;
}
v3f32 v3f32_add_f32(v3f32 v, f32 s) {
    v3f32 result = {0};
    result.x = v.x + s;
    result.y = v.y + s;
    result.z = v.z + s;
    return result;
}
v3f32 v3f32_mul_f32(v3f32 v, f32 s) {
    v3f32 result = {0};
    result.x = v.x * s;
    result.y = v.y * s;
    result.z = v.z * s;
    return result;
}
v3f32 v3f32_div_f32(v3f32 v, f32 s) {
    v3f32 result = {0};
    result.x = v.x / s;
    result.y = v.y / s;
    result.z = v.z / s;
    return result;
}
v3f32 v3f32_normalize(v3f32 v) {
    v3f32 result = {0};
    f32 reciprocal_length = 1.0f / v3f32_length(v);
    result.x = v.x * reciprocal_length;
    result.y = v.y * reciprocal_length;
    result.z = v.z * reciprocal_length;
    return result;
}
f32 v3f32_dot(v3f32 a, v3f32 b) {
    f32 result = a.x * b.x + a.y * b.y + a.z * b.z;
    return result;
}

f32 v3f32_length(v3f32 v) {
    f32 result = sqrt(v3f32_dot(v, v));
    return result;
}
v3f32 v3f32_project(v3f32 a, v3f32 b) {
    v3f32 result = v3f32_mul_f32(b, v3f32_dot(a, b) / v3f32_dot(b, b));
    return result;
}
v3f32 v3f32_reject(v3f32 a, v3f32 b) {
    v3f32 result = v3f32_mul_f32(b, v3f32_dot(a, b) / v3f32_dot(b, b));
    result = v3f32_sub_v3f32(a, result);
    return result;
}
void v3f32_print(v3f32 v) {
    printf("vector: {%f, %f, %f}\n", v.x, v.y, v.z); 
    return;
} 
