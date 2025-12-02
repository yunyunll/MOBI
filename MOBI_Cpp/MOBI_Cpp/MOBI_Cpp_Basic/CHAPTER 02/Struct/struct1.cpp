#include <iostream>
#include <string>
#include <vector>

// C-style 구조체
// C언어의 구조체는 구조체 변수를 생성할 때마다 struct 키워드를 붙인다.

// C++ style 구조체
// C++ 구조체는 보다 문법이 간결해짐
// 멤버 -> 데이터 멤버로 이름 변경
// 멤버 함수 사용가능

// Class 등장 - struct와 class 차이는 거의 없다(public / private 차이만 있음)
// struct - 데이터의 묶음을 표현할 때 강조할 때 사용
// class  - 데이터의 묶음 + 동작(함수)을 강조할 때 사용

// 변수         : 데이터를 저장할 수 있는 메모리 공간의 별칭
// 객체(object) : 데이터와 함수를 가지고 있으며 클래스로 만들어진 요소

// Class
class struct1_frame{
public:
    int tireCount = 4;
    void drive(){
        std::cout << "gogo" << std::endl;
    }
};

// 객체지향 프로그래밍 패러다임 : 객체를 중심으로 프로그래밍을 구성하는 방식
// 예시 1.   간단한 게임을 만들고자한다
//          내가 만들고자 하는 프로그램을 구성하는 요소부터 표현한다
//          객체지향 패러다임으로 설계된 객체들을 생성&제어하는 코드를 추가하여 프로그램을 동작



int struct1(){
    
// 객체 - 클래스대로 만들어진 실물
//    설계도 대로 찍어낸 차량
//    설계도 x;
//    설계도 y;
    
    struct1_frame car1;
    struct1_frame car2;
    
    car1.drive();
    
    
// 인스턴스(Instance) : 클래스를 정의한 대로, 메모리에 할당이 이뤄져 동작되는 실체를 인스턴스(객체)
// 객체 포인터         : 인스턴스를 참조하고 있는 변수를 객체 포인터
    
//  클래스     객체 포인터 =    인스턴스(객체) 생성
    struct1_frame*   car3     =     new struct1_frame(); // 동적 할당
    
    car3->drive();
    
    delete car3; // 동적할당 한 뒤 삭제해야함
    
    
    
 return 0;
}

