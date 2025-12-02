#include <iostream>

// 소멸자(Destructor)
// 객체가 소멸할 때 자동으로 호출되는 특별멤버함수

// 언제 호출될까
// 객체가 소멸할 때 호출
// Scope안에서 만들어진 객체는 Scope를 탈출할 때 소멸
// Scope-based Lifetime - {}블록에서 생성된 객체는 블록 탈출시 자동 소멸

// Special Member Functions
// 생성자, 소멸자 등 컴파일러가 자동으로 생성해주는 함수

// RAII(Resource Acquisition Is Initialization
// 객체가 자원의 소유권을 관리한다
// 객체가 생성될 때 필요한 자원을 획득한다
// 객체가 소멸될 때 필요한 자원을 반납한다

// RAII 원칙을 지켜서만든 Library를 우선적으로 사용해야한다.
// Pointer - RALL 원칙이 아님
// Pointer가 소멸하기 전 개발자가 직접 delete 명령어를 사용해야한다 (잊어버리면 메모리 누수 발생)
// Smart Pointer - RALL 원칙
// SmartPointer가 소멸할 때 관리중인 자원이 자동으로 소멸된다 (delete 작업 신경 안써도 된다)

// 소멸자는 생각보다 자주 안쓰인다
// DB, Socket, Temp 파일 정리

class constructor2_Person{
public:
    constructor2_Person() = default;
    
    // 소멸자
    ~constructor2_Person() = default;

    // 소멸자
//    ~Person() = delete; // 쓸 일이 없음

};



int constructor2() {
    
    {
        constructor2_Person a;
        constructor2_Person b;
    } // 이 타이밍에 객체가 소멸


    return 0;
}
