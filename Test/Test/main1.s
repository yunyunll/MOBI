	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 5
	.globl	_foo                            ; -- Begin function foo
	.p2align	2
_foo:                                   ; @foo
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	str	w1, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
//main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	mov	w0, #0                          ; =0x0
	str	wzr, [sp, #12]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols


//#include <stdio.h>
//
//#ifdef __unix__
//#define asm_main _asm_main
//#endif
//
//int asm_main(void);
//
//int main(void) {
//
//    int result = asm_main();
//
//    printf("Result: %d\n", result );
//
//    return 0;
//}
//// 스택을 통해서 함수를 호출하는 방법
//.text
//
//.globl _asm_main
//.globl _asm_foo
//
//// 스택에 함수저장
//_asm_main:
//// AAA의 주소를 계산해서 스택에 push
//    adrp x2, AAA@PAGE
//    add  x2, x2, AAA@PAGEOFF
//    str  x2, [sp, #-16]!     // push x2 (sp -= 16, [sp] = x2) 스택에 돌아올 주소를 넣기 psuh ebx
//    b    _asm_foo            // _asm_foo로 분기
//
//AAA:
//    ret                      // _asm_foo가 끝나면 여기로 돌아옴
//
//
//_asm_foo:
//    mov  x0, #300            // x0에 300 저장
//    ldr  x2, [sp], #16       // pop x2 (x2 = [sp], sp += 16) 스택에서 저장한 주소 꺼내기 pop ebx
//    br   x2                  // x2 주소로 점프 (복귀)
