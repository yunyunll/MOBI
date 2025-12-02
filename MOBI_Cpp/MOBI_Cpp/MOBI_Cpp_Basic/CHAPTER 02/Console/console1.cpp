#include <stdio.h> // Library .h가 있으면 C언용
#include <iostream> // .가 없으면 C++용
//#include "kfc.h" // custom Library
namespace kfc{
    int getSum1(int a, int b){
        return a + b;
    }
}

//#include "bbq.h" // custom Library
namespace kfc{
int a = 10;
    
    int getSum2(int a, int b){
        return
    a + a + b + b;
    }

    struct Node{
        int x,y;
    };
}


// AUTOSAR 룰 안정성 엄청 강조
// Google C++ Coding Guide
// std 가 있으면 공식 Library
// namespace 그룹화
int console1(){
    
//    int d = kfc::getSum(3,4);
//    int g = kfc::getSum(3,4);
//    int c = std::getSum(3,4);
//
//    kfc::a = 500;
    
    int x = 0;
    std::cin >> x;
    std::cout << "Hello";
    
    std::cout << x << std::endl;

    
    return 0;
}
