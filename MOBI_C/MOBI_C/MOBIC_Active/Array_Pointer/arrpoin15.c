#include <stdio.h>
#include <stdlib.h> // malloc

void arrpoin15_foo(void){
    printf("프로그램의 종료시간 기록\n");
}

//void atexit(void(*f)(void)){
// 함수의 시그니처(반환값, 인자, 함수) 모두 void 모양
//}

int arrpoin15(void) {
    
    atexit(&arrpoin15_foo); // 인자로 함수 또는 함수 주소를 받는다
    // call back 시스템에서 결정하는 함수 ( 사용자가 만든 함수를 시스템에 등록)

    printf("hello\n");
    printf("world\n");
    
    
    
    // 프로그램이 종료되기 전에 foo함수를 반드시 호출하고 싶다
    arrpoin15_foo();
    
    return 0; // 자동으로 0을 반환
    
}
