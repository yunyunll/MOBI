#include <stdio.h>
#include <stdarg.h>

//void adic6_foo( ...){ // 가변인자함수(이 공간에 반드시 인자가 있어야함)...
//}

void adic6_f1(int n, ...){}
void __stdcall adic6_f2(int n, ...){}
void __fastcall adic6_f3(int n, ...){}

int main(void){
//    adic6_foo(1,2,3);
    
    int n = 10;
    printf("%d\n",n);
    // 가변인자가 잘못되어도 컴파일 에러는 없지만 결과가 잘못됨
//    printf("%d %d %d\n",n);
    printf("%hello\n",n);
    
    // 인자 전달 수는 호출자만 알 수 있음 => 호출자가 파괴해야함
    adic6_f1(3,1,2,3);
    // 인자를 스택에 넣고
    // call f1
    adic6_f2(3,1,2,3);
    adic6_f3(3,1,2,3);

    
    return 0;
    
}
