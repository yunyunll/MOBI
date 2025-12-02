#include <stdio.h>
#include <iostream> // fill이라는 함수 존재
#include <string>

// 공식 용어 -> 자주 나옴

// 비추천 코테는 쓰는데 AUTOSAR는 안씀
//using namespace std; // using directive
// 방어적 프로그래밍(Defensive programming) -> 문법을 사용하지 않는다면 비용 발생 X


using std::cout; // using declaration 일부 허용

int console2(){
    
    cout << "A" << std::endl;
    cout << "B" << std::endl;
    cout << "C" << std::endl;
    cout << "D" << std::endl;

    
    return 0;
}
