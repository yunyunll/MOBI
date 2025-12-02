#include <stdio.h>
#include <iostream> // fill이라는 함수 존재
#include <string>

// 헤더에서 함수 선언부
// main에는 정의부
// 현업에서 권장하지 않지만 강의에서는 헷갈리지 않게

// namespace는 반복적으로 사용해도 문제 없음
namespace BTS{
    int x;
}

namespace BTS{
    void run();
}

namespace BTS{
void run(){
    std::cout << "Hi";
}
}
namespace BTS{
    int y;
}
// 동일
//namespace BTS{
//    int x;
//    int y;
//}


int console4(){
    

    BTS::run();
    
    
    return 0;
}
