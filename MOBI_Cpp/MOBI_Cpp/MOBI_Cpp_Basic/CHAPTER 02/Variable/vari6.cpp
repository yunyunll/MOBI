#include <iostream>
#include <string>

// 캐스팅과 형변환(Type Conversion)
// int a = 3.4;         // 암시적 형변환(Implicit Type Conversion) - 비추천
// int a = (int)3.4;    // 명시적 형변환(Explicit Type Conversion)
// Truncation 버그 - 데이터가 짤려나가는 버그
// Explicit code
// 유지보수성이 올라가며 버그를 사전에 차단 AUTOSAR 추천
using std::string;

int vari6(){
    
    int a = (int)3.4;
    
    std::cout << a << std::endl;
    
    char ch;
    int* p = (int *) &ch;
    
    *p = 1000;
    // char 라는 작은 공간에 포인터로 큰 값 넣기
//    std::cout << ch << std::endl; // 잘못된 캐스팅으로 Runtime Error
    
    // C++ 캐스팅
    int b = static_cast<int>(3.4);
    
    // reinterpret -> 임베디드
    uint32_t* gpio = (uint32_t*)0x40042001;
    *gpio = 1;
    
//    uint32_t* p2 = static_cast<uint32_t*>(0x40042001);
//    uint32_t* p2 = reinterpret_cast<uint32_t*>(0x40042001);
    
    
    
    return 0;
}
