#include <stdio.h>
#include <stdlib.h> // malloc

// 정리

//int[3] // 배열 타입
//int(*)[3] // 배열을 가르키는 포인터 타입
//
//int(int,int) // 함수 타입
//int(*)(int,int) // 함수를 가리키는 포인터 타입
//
//typedef int FUNC (int,int). // FUNC는 함수 타입
//typedefint(*PFUNC)(int,int) // FUNC 함수 가리키는 포인터 타입




 
// int(int,int) : 함수타입
int arrpoin13_Add(int a,int b){
    
    printf("Add : %d, %d\n",a,b);
    return a + b;
}

// int Add(int a, int b); // 함수 선언
// int (*p)(int,int); // 함수 포인터 변수

typedef int FUNC(int, int); // 함수 타입
typedef int (*PFUNC)(int,int); // 함수 포인터 타입


// void arrpoin13_foo(FUNC* f){
// void arrpoin12_foo(int (*f)(int, int)){
void arrpoin13_foo(PFUNC f){
    f(1,2); // Add(1,2);
}

// int (*arrpoin13_goo())(int,int) {
// FUNC* arrpoin13_goo(){
PFUNC arrpoin13_goo(){
    
    return arrpoin13_Add;
}


int arrpoin13(void) {
    
    int n = 0;
    int x[3] = {1,2,3}; // int[3] : 배열 타입
    
    int (*p1)[3] = &x; // int (*)[3] : 배열을 가르키는 포인터 타입
    
    int (*p2)(int,int) = &arrpoin13_Add; // int(*)(int,int)
    
    
    arrpoin13_Add(1,2); // foo(int a, int b);
    arrpoin13_foo(arrpoin13_Add);
    arrpoin13_goo()(1,2);
    
    return 0; // 자동으로 0을 반환
    
}
