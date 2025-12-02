#include <stdio.h>

// 함수의 이름 함수인자의 이름 제외
void goo(int a); // 함수 선언 void(int) type

//int n; // n 변수
//int *p; // *p 포인터 변수
//int x[3];// x 배열 변수
//void foo(int);// foo 함수
//
//// typedef 변수 자리의 심볼이 변수가 아닌 타입
//typedef int n; // n 타입
//typedef int *p; // *p 포인터 변수 타입
//typedef int x[3];// x 배열 변수 타입
//typedef void foo(int);// foo 함수 타입
//foo goo // void foo(int) // 함수 선언
//
//n a = 10; // int a = 10;
//x r = {1,2,3}; // int r[3] = {1,2,3{;

typedef int DWORD;
typedef int AR[2];
typedef int AR2[2][3];


int basic4(void) {
    
    // 변수의 이름과 초기화 구문을 제외
    int n = 10; // n 은 int type
    double d = 3.4; // d double type
    
    int x[3] = {1,2,3}; // int[3] type
    int y[3][2] = {0}; // int[3][2] type
    
    DWORD n1 = 10; // int n = 10;
    AR x1 = {1,2}; // int x[2] = {1,2};
    AR2 y1 = {{1,2,3},{4,5,6}}; // int y[2][3] = {{1,2,3},{4,5,6}};

    return 0; // 자동으로 0을 반환
}

void goo(int a){
}

