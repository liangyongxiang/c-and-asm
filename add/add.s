// SPDX-License-Identifier: GPL-2.0+

    .section .text, "x"
    .balign 4
    .global add

//add:
//    mov r0, 5050
//    bx lr

add:
    mov r0, #0
    mov r1, #1
1:
    add r0, r1
    add r1, #1
    cmp r1, #100
    bls 1b

    bx lr