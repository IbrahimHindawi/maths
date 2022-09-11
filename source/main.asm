                                                include                 macros.asm
                                                option                  casemap:none
;________________________________________________________________________________________________________________________
;_______________________________________________[type]__________________[structure definitions]__________________________
;________________________________________________________________________________________________________________________
s_vec2                                          struct
x                                               real4                   ?
y                                               real4                   ?
s_vec2                                          ends

s_vec3                                          struct
x                                               real4                   ?
y                                               real4                   ?
z                                               real4                   ?
s_vec3                                          ends

;________________________________________________________________________________________________________________________
;_______________________________________________[vars]__________________[variables]______________________________________
;________________________________________________________________________________________________________________________
                                                .data
v                                               s_vec3                  {0.0, 0.0, 0.0}
;________________________________________________________________________________________________________________________
;_______________________________________________[func]__________________[function prototype]_____________________________
;________________________________________________________________________________________________________________________
                                                .code

                                                public                  func
func                                            proc
                                                local                   holder:qword
                                                xor                     rax, rax                                        ; zero rax
                                                ret
func                                            endp

                                                public                  s_vec3f_add_scalar
s_vec3f_add_scalar                              proc                    ; (rcx: vec3, xmm0: s)
                                                Save_Registers

                                                movss                   xmm1, dword ptr [rcx.s_vec3.x]
                                                addss                   xmm1, xmm0
                                                movss                   dword ptr [rcx.s_vec3.x], xmm1

                                                movss                   xmm1, dword ptr [rcx.s_vec3.y]
                                                addss                   xmm1, xmm0
                                                movss                   dword ptr [rcx.s_vec3.y], xmm1

                                                movss                   xmm1, dword ptr [rcx.s_vec3.z]
                                                addss                   xmm1, xmm0
                                                movss                   dword ptr [rcx.s_vec3.z], xmm1

                                                Restore_Registers
                                                ret
s_vec3f_add_scalar                              endp

                                                end
