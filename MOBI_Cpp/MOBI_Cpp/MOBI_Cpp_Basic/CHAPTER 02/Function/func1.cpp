#include <iostream>
#include <string>

// 사전용어
// Argument(인자값)    : 함수 호출시 보내는 값
// Parameter(매개변수)  : 함수가 호출되고 받는 변수
// Function Interface : 함수 사용 방법을 정의한 것             int get_sum(int a, int b)
// Function Signature : 컴파일러가 함수를 식별하는 고유ID 개념    get_sum(int a, int b)

// Default Parameter
// 함수 Parameter에 Default값을 지정하는 방법
// int get_sum(int a, int b = 10) -> b : Default Parameter
// std::next(it) => ++it
// std::next(it,2) => it += 2
// 유의 사항 - 가장 오른쪽부터 사용, 선언부(헤더)에 값을 적어야함


// Function Overloading
// 하나의 이름으로 여러 버전의 함수를 만드는 방법

void func1_printMessage(std::string msg, bool newline = true);


int func1(){
    
    func1_printMessage("Hello");
    func1_printMessage("My Name is",false);
    func1_printMessage("...");
    

    
    
 return 0;
}

void func1_printMessage(std::string msg, bool newline){
    std::cout << msg;
    if(newline) std::cout << std::endl;
}
