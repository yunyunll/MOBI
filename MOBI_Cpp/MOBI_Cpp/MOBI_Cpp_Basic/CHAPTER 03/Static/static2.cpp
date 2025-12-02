#include <iostream>

// static member function
// static 멤버함수는 객체를 만들지 않아도 호출될 수 있다.
// static 멤버 함수는 non-static 멤버함수를 호출할 수 없다.

// 간헐적으로 사용
// 클래스와 관련이 있는 내용이면서 클래스 외부에서도 사용 가능한 Utility함수 (편의성을 위한 함수)를 만들 때

class static2_PlayGround {
public:
    static void welcome() {
        std::cout << "HI" << std::endl;
        mileToKmPerSec(343);
    }
    
    
    static double mileToKmPerSec( double milesperhour){
        // 1 mile = 1.60934 km
        // 1 hour = 3600 seconds
        return(milesperhour * 1.60934 ) / 3600.0;
    }
    
};


int static2() {
    
    static2_PlayGround::welcome();
    static2_PlayGround::mileToKmPerSec(3454.0);
    std::cout << static2_PlayGround::mileToKmPerSec(35435434.0);

    
    return 0;
}


