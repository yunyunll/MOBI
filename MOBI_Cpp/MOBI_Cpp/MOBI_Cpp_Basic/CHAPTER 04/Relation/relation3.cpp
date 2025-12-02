#include <iostream>
#include <string>
#include <vector>

// 상속 is-a 관계
// 부모 클래스의 멤버함수들을 자식 클래스가 마치 자기 것인것 처럼 사용
// 부모 자식 관계이면서 동시에 분류와 파생 개념(Base / Derived)

// protected 접근자
// protected는 private과 똑같이, 외부에서 멤버 접근을 막는다
// protected는 private과 달리, 상속을 받은 Class에서 접근을 허용한다

// 상속의 활용 : 중복코드제거
// 상위 분류에 해당되는 클래스를 만든다
// 이후 중복 코드를 상위 클래스에 옮기고 상속을 통해 중복코드를 줄일 수 있다

// 상속의 그림 표현하기
// 상위 클래스를 위쪽에 배치하여 표현
// 하위 클래스는 아랫쪽에 배치 ( By UML Best pratice)


class relation3_Machine {
public:
    void init() {
        std::cout << "장치를 켭니다.";
    }
protected:
    int lifeCnt = 100;
    
};

class relation3_CoffeeMachine : public relation3_Machine { //문제
public:
    void makeCoffee() {
        init();
        std::cout << "커피를 만든다\n";
    }
};

class relation3_Phone { // 과일
public:
    void call() {
        std::cout << "전화";
    }
};

// Smartphone is a phone
class relation3_Smartphone : public relation3_Phone { // 사과
public:
    void internet() {
        std::cout << "연결\n";
    }
};
class relation3_BrickPhone : public relation3_Phone { // 귤
public:
    void internet() {
        std::cout << "연결\n";
    }
};


int relation3() {

    relation3_Machine m;
    m.init();

    relation3_CoffeeMachine c;
    c.init();
    
    relation3_Smartphone sp;
    sp.call();
    sp.internet();
    
    relation3_BrickPhone bp;
    bp.call();

    return 0;
}
