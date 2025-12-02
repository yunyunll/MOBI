	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 5
	.globl	_Add                            ; -- Begin function Add
	.p2align	2
_Add:                                   ; @Add
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	str	w1, [sp, #8]
	str	wzr, [sp, #4]
	str	wzr, [sp]
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #8]
	add	w8, w8, w9
	str	w8, [sp, #4]
	ldr	w0, [sp, #4]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
// _main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0                          ; =0x0
	str	w8, [sp, #4]                    ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	mov	w0, #1                          ; =0x1
	mov	w1, #2                          ; =0x2
	bl	_Add
	mov	x8, x0
	ldr	w0, [sp, #4]                    ; 4-byte Folded Reload
	str	w8, [sp, #8]
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols


//#include <stdio.h>
//int Add(int a, int b){
//    int x = 0;
//    int y = 0;
//    x = a + b;
//    return x;
//}

//int main(void) {
//    int n = Add(1,2);
//
//    return 0;
//}

