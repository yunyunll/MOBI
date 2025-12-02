#include <stdio.h>
#include <stdlib.h> // malloc
 

int arrpoin12_Add(int a,int b){
    printf("Add : %d, %d\n",a,b);
    return a + b;
}
// 함수에서 함수를 인자로 받기
void arrpoin12_foo(int (*f)(int, int)){
    f(1,2); // Add(1,2);
}

// 함수에서 함수 반환하기
// 1. 함수 포인터 타입 만들기
int (*f)(int, int);
// 2. 변수 자리에 "함수이름()"


int (*arrpoin12_goo())(int,int) {
    
    return arrpoin12_Add;
    // return &arrpoin12_Add;
}


int arrpoin12(void) {
    
    int n = 0;
    int x[3] = {1,2,3};
    
    arrpoin12_foo(&arrpoin12_Add); // foo(int a, int b);
    arrpoin12_goo()(1,2); // goo()(1,2)
    
    return 0; // 자동으로 0을 반환
    
}

