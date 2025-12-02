//#include <stdio.h>
//
//extern void hello_from_asm(void);  // 어셈블리 함수 선언
//
//int main() {
//    printf("C code is running...\n");
//    hello_from_asm();              // 어셈블리 함수 호출
//    printf("Back to C code!\n");
//    return 0;
//}

#include <stdio.h>

int foo_1(void) {
    int r;
    __asm__("mov %w0, #100" : "=r"(r));
    return r;
}
//eax = 100
//return 100;

int func1(void) {
    int result;
    __asm__ volatile (
        "bl _foo_1\n"
        : "=r"(result)
        :
        : "x0", "lr"
    );
    // int result;
    // result = foo();
    
    printf("%d\n", result);  // 42 출력
    return 0;
}
