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

#ifdef __unix__
#define asm_main _asm_main
#endif

int asm_main(void);

int func2(void) {
    
    int result = asm_main();  // 어셈블리 함수 호출

    printf("Result: %d\n", result );  // 결과 출력 (16이어야 함)
    
    printf("%d\n", result);  // 42 출력
    return 0;
}






