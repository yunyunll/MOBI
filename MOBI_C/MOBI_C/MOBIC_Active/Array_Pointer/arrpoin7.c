#include <stdio.h>
int* arrpoint7_f1(){
    int x[2] = {0};
    return x;
}

// 1차 배열일 때는 포인터 타입
//int arrpoint7_f2()[3]{
int* arrpoint7_f2(){
    int x[3] = {1,2,3};
    return x;
}

// 2차 배열일 => 1차 배열을 가리키는 포인터
// int (*p)[2]; 변수 이름 대신 함수+괄호
//int arrpoint7_f2()[3][2]{
int (*arrpoint7_f3())[2]{
    int x[3][2] = {1,2,3,4,5,6};
    return x;
}

// 3차 배열일 => 2차 배열을 가리키는 포인터
// int (*p)[2][2]; 변수 이름 대신 함수+괄호
//int arrpoint7_f2()[3][2][2]{
int (*arrpoint7_f4())[2][2]{
    int x[3][2][2] = {1,2,3,4,5,6,7,8,9};
    return x;
}
// N차 배열일 => N-1차 배열을 가리키는 포인터
// 변수 이름 대신 함수이름()


int arrpoint7(void) {
    
    int x[3] = {1,2,3};
//    int y[3] = x; // 배열을 복사할 수 없음
    int *y = x;
    
    int *ret = arrpoint7_f1();
//    ret[0] = 10; // error
    
    
    return 0; // 자동으로 0을 반환
    
}
