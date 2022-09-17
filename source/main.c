#include <stdio.h>
#include "stdtype.h"
#include "m_vec.h"
#include "m_matrix.h"

v3f32 pos;
v3f32 up;
v3f32 fd;

m33 mtx;

m33 A;
m33 B;
m33 R;

int main() {
    printf("\nC MATHEMATICS\n");

    pos = v3f32_create(12.23414f, 8.1245f, 3.1234f);
    printf("pos:\n"); 
    v3f32_print(pos);

    pos = v3f32_add_f32(pos, 3.0f);
    printf("pos:\n"); 
    v3f32_print(pos);

    up.y = 1.0f;
    fd.z = 1.0f;
    f32 dotprod = v3f32_dot(up, fd);
    printf("dot: %f\n", dotprod);

    f32 len = v3f32_length(pos);
    printf("length: %f\n", len);

    v3f32 npos = v3f32_normalize(pos);
    printf("normalized vector:\n"); 
    v3f32_print(npos);

    len = v3f32_length(npos);
    printf("normalized length: %f\n", len);

    m33_print(mtx);
    m33_set_f32(mtx, 
            1.0f, 0.0f, 0.0f, 
            0.0f, 1.0f, 0.0f, 
            0.0f, 0.0f, 1.0f);
    m33_print(mtx);

 
    /* pointer to an array */
    f32 (*var)[3];      
    /* 
     * multi dimensional array
     * or f32 *rows = (f32 *)malloc(3 * 3 * sizeof(f32)); 
     */
    f32 rows[3][3];     
    /* point to the address of the array */
    var = rows;         
    /* printf("%f", var[3][3]); */

    m33_set_v3f32(mtx, pos, up, fd);
    m33_print(mtx);

    v3f32 xv = m33_v3f32(mtx, 0);
    printf("extracted vector:\n"); 
    v3f32_print(xv);

    m33_set_f32(A, 
            2.0f, 0.0f, 9.0f, 
            0.0f, 1.0f, 4.0f, 
            0.0f, 8.0f, 1.0f);
    m33_print(A);
    m33_set_f32(B, 
            1.0f, 2.0f, 6.0f, 
            2.0f, 9.0f, 0.0f, 
            3.0f, 9.0f, 1.0f);
    m33_print(B);
    m33_mul_m33(R, A, B);
    m33_print(R);

    m33_mul_v3f32(A, up);

    printf("\n\n");
    return 0;
}
