.global _hello_from_asm
.text

_hello_from_asm:
// 프로롤로그: 프레임 저장
stp x29, x30, [sp, #-16]!   // 스택에 x29, x30 저장하고 sp -= 16
mov x29, sp                 // 현재 스택 포인터를 프레임 포인터로

// ---- 실제 코드 ----
adrp x0, msg@PAGE
add  x0, x0, msg@PAGEOFF
bl   _puts                  // puts(msg) 호출

// ---- 복원 후 리턴 ----
mov sp, x29
ldp x29, x30, [sp], #16     // x29, x30 복원 + sp += 16
ret

.data
msg:
.asciz "Hello from ARM64 Assembly!"
