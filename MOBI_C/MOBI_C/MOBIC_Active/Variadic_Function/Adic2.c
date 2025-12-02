#include <stdio.h>
#include <stdarg.h>

void adic2_foo(int n,...){ // 가변인자함수(...)
    
    va_list args; // char *args;
    va_start(args,n); // args= &n + 1

    for(int i = 0; i < n; i++){
        
        int a = va_arg(args , int);
        // 1. args 가 가르키는 곳에서 int 꺼내기
        // 2. args를 int 크기 만큼 이동
        printf("%d\n",a);
    }
    va_end(args); // args = 0;
}

int Adic2(void){
    
    
    adic2_foo(7, 10, 20, 30, 40, 50, 60, 70); // push
    
    return 0;
    
}

