#include <stdio.h>
int arrpoint6_f1(){
    
    int n = 10;
    return n;
}
//int a;
//int foo();
//
//int x[3];
//int foo()[3];
//int foo(int a, int b)[3];

// 1차 배열일 때는 포인터 타입
//int arrpoint6_f2()[3]{
//    int x[3] = {1,2,3};
//    return x;
//}


int arrpoin6(void) {
    
    // 변수 선언시 Data Type 뒤에 변수 이름
    int n= 0;
    double d = 0;
    
    // 배열 선언시 Data Type 사이에 변수 이름
    int x[3] = {1,2,3};
    
    int *y = x;
    
    arrpoint6_f1(y);
    
    printf("%p\n",y);
    
    
    
    
    

//    arrpoint6_f1();
//    arrpoint6_f2(x);
    
    return 0; // 자동으로 0을 반환
    
}
