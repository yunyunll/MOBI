	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 5
	.globl	_f1                             ; -- Begin function f1
	.p2align	2
_f1:                                    ; @f1
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	w0, [x29, #-4]
	stur	w1, [x29, #-8]
	ldur	w8, [x29, #-4]
	mov	x10, x8
	ldur	w8, [x29, #-8]
                                        ; kill: def $x8 killed $w8
	mov	x9, sp
	str	x10, [x9]
	str	x8, [x9, #8]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_f2                             ; -- Begin function f2
	.p2align	2
_f2:                                    ; @f2
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	w0, [x29, #-4]
	stur	w1, [x29, #-8]
	ldur	w8, [x29, #-4]
	mov	x10, x8
	ldur	w8, [x29, #-8]
                                        ; kill: def $x8 killed $w8
	mov	x9, sp
	str	x10, [x9]
	str	x8, [x9, #8]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_f3                             ; -- Begin function f3
	.p2align	2
_f3:                                    ; @f3
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	w0, [x29, #-4]
	stur	w1, [x29, #-8]
	ldur	w8, [x29, #-4]
	mov	x10, x8
	ldur	w8, [x29, #-8]
                                        ; kill: def $x8 killed $w8
	mov	x9, sp
	str	x10, [x9]
	str	x8, [x9, #8]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_f4                             ; -- Begin function f4
	.p2align	2
_f4:                                    ; @f4
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	w0, [x29, #-4]
	stur	w1, [x29, #-8]
	stur	w2, [x29, #-12]
	stur	w3, [x29, #-16]
	ldur	w8, [x29, #-4]
	mov	x12, x8
	ldur	w8, [x29, #-8]
	mov	x11, x8
	ldur	w8, [x29, #-12]
	mov	x10, x8
	ldur	w8, [x29, #-16]
                                        ; kill: def $x8 killed $w8
	mov	x9, sp
	str	x12, [x9]
	str	x11, [x9, #8]
	str	x10, [x9, #16]
	str	x8, [x9, #24]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
//_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0                          ; =0x0
	str	w8, [sp, #8]                    ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	mov	w0, #1                          ; =0x1
	str	w0, [sp]                        ; 4-byte Folded Spill
	mov	w1, #2                          ; =0x2
	str	w1, [sp, #4]                    ; 4-byte Folded Spill
	bl	_f1
	ldr	w0, [sp]                        ; 4-byte Folded Reload
	ldr	w1, [sp, #4]                    ; 4-byte Folded Reload
	bl	_f2
	ldr	w0, [sp]                        ; 4-byte Folded Reload
	ldr	w1, [sp, #4]                    ; 4-byte Folded Reload
	bl	_f3
	ldr	w0, [sp]                        ; 4-byte Folded Reload
	ldr	w1, [sp, #4]                    ; 4-byte Folded Reload
	mov	w2, #3                          ; =0x3
	mov	w3, #4                          ; =0x4
	bl	_f4
	ldr	w0, [sp, #8]                    ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%d, %d\n"

l_.str.1:                               ; @.str.1
	.asciz	"%d, %d, %d, %d\n"

.subsections_via_symbols

//#include <stdio.h>
//void f1(int a, int b){ // __cdecl
//    printf("%d, %d\n",a,b);
//}
//void __attribute((stdcall)) f2(int a, int b){
//    printf("%d, %d\n",a,b);
//}
//void __fastcall f3(int a, int b){
//    printf("%d, %d\n",a,b);
//}
//void __fastcall f4(int a, int b,int c,int d){
//    printf("%d, %d, %d, %d\n",a,b,c,d);
//}
//
//int main(void) {
//    f1(1,2);
//    f2(1,2);
//    f3(1,2);
//    f4(1,2,3,4);
//
//    return 0;
//}

