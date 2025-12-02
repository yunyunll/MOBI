#include <iostream>

#ifndef class1_h
#define class1_h

#include "class1.h"

#endif


// 용어정리
// 클래스 (class)              : 객체의 설계도, 이 구조 그대로 객체가 만들어질 예정
// 멤버함수 (Member Function)   : 객체가 수행할 수 있는 동작
// 데이터 멤버 (Data member)    : 객체가 가지고 있는 데이터

// C언어에서 함수 선언과 정의
// C언어에서는 헤더파일으로 공유하는 방법으로 다른 파일에 있는 함수를 사용할 수 있도록

// 헤더가드의 필요성
// 중복 include가 되었을 때 빌드 에러 방지용으로 헤더가드를 넣어준다

// #pargma once - 헤더가드(비표준)
// 표준
// #indef CAL_H
// #define CAL_H
// #endif CAL_H

// 선언 - Header File
class class1_Cal{
public:
    int sum(int a, int b);
};

// 정의 - cpp 파일
int class1_Cal::sum(int a, int b){
    return a + b;
}

// 강의에서는 이렇게 사용 교육상 편의
// 선언 + 정의
//class class1_Cal{
//public:
//    int sum(int a, int b){
//        return a + b;
//};



int class1() {
    
    class1_Cal c;
    int a  = c.sum(2,3);

    
    
    

    return 0;
}
