//
//  class3.cpp
//  MOBI_Cpp
//
//  Created by 윤지윤 on 11/20/25.
//

#include <stdio.h>
#include <iostream>

// 객체(object)
// 클래스가 실제로 메모리에 생성된 실체
// 객체 또는 인스턴스라고 함


// 선언

class class2_Person{
public:
    void run (){
        std::cout << "뛴다";
    }
    int age = 10;
};



int class2() {
    
    // 변수 : 메모리 공간의 별칭
    // 객체 : 데이터와 동작을 가지고 있는 덩어리
    class2_Person per; // Person 타입 per 객체 // 스택에 생성
    per.run();

    // 동적할당
    // 객체 포인터
    class2_Person* p = new class2_Person(); // 힙에 생성
//    class2_Person* p = 스마트 포인터 // 힙에 생성
    
    p->run();
    
    delete p;
    
    

    return 0;
}
