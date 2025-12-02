#include <iostream>

// 생성자
// 객체를 생성할 때 자동으로 호출되는 멤버함수
// 한 클래스는 Parameter별로 다양한 생성자를 추가할 수 있다

// default Constructor (생성자)
// argument가 없는 생성자
// 생성자가 하나도 없을때만 컴파일러가 Default 생성자를 생성


class constructor1_Person{
public:
    // 생성자
    constructor1_Person(){ // default Constructor (생성자)
        std::cout << "생성자" << std::endl;
    }
//   Person() = default // default 생성자 컴파일러님 생성해주세요 가독성을 높임
//   Person() = delete // default 생성자를 사용하지 않겠다
    
    // 생성자
    constructor1_Person(int a, int b){ // Parameter 넣을 수 있음
        std::cout << a + b << std::endl;
    }
    int age = 10;
};



int constructor1() {
    
    constructor1_Person p1;
    constructor1_Person* p2 = new constructor1_Person();
    
    delete p2;
    
    constructor1_Person p3{10,20}; // Uniform Initialization
    constructor1_Person* p4 = new constructor1_Person(20,30);
     
    
    

    return 0;
}
