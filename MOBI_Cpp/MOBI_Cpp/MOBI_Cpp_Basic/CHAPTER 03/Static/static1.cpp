#include <iostream>

// static data member
// 객체를 만들지 않고 접근할 수 있는 데이터
// 모든 객체가 공유하는 변수를 만들 수 있다
// 자주 사용되지 않지만 클래스 내부에서 정의되는 static const 상수는 매우 자주 사용
// private으로 static const -> 클래스 내부에서 사용되는 상수로 쓰인다.

class static1_KFC {
public:
    static int t;
};

int static1_KFC::t = 100;


int static1() {
    static1_KFC a, b;

    std::cout << a.t << std::endl;
    std::cout << b.t << std::endl;
    b.t += 10;
    std::cout << static1_KFC::t << std::endl;
    std::cout << a.t << std::endl;
    
    return 0;
}


