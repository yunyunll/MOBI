#include <iostream>
#include <string>
#include <vector>

// Function Overloading
// 하나의 이름으로 여러 버전의 함수를 만드는 방법
// 함수 이름은 같아도 Argumenet가 다르면 다른 함수로 취급하는 것
// 같은 기능을 제공하는 함수를 하나의 이름으로 여러개 만들고자 할 때

// Overload Resolution
// 함수 호출시, 어떤 오버로딩된 함수를 호출할지 우선순위가 존재한다.
// double -> float -> int
// 권장 규칙 - 타입에 맞게 호출하기

// const + 기본타입은 오버로딩 불가
// 예외 -> const + 포인터(refernece)
// const pointer는 독립적 타입

void func2_func(float x){}
void func2_func(double x){}

void func2_func(const char *str){              // 우선순위1
    std::cout << "const char*" << std::endl;
}

void func2_func(std::string str){             // 우선순위2
    std::cout << "string str" << std::endl;
}

void func2_func(char* str){                   // 우선순위3
    std::cout << "char*" << std::endl;
}




int func2(){
    
    func2_func(static_cast<double>(3.4));
    func2_func(std::string{"Hello"});
    func2_func("Hello"); // const char*

    
    
 return 0;
}

