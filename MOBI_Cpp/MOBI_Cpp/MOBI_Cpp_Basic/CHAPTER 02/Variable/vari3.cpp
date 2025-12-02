#include <iostream>
#include <string>

// 파싱
// 문자열에 필요한 부분만 추출하는 것
// 현업에서는 간단한 것만
// find, substr

using std::string;

int vari3(){
    
    string str = "BBQKFCAB[3242]ABABQQBBQKFCABC";
    
    std::cout << str.find("KFC") << std::endl;
    std::cout << str.find("KFC",10) << std::endl;
    
    std::cout << str.substr(3,5) << std::endl; // 3번부터 5글자 뽑기
    
    int a = str.find('[');
    int b = str.find(']',a);
    
    std::cout << str.substr(a + 1,b - a - 1) << std::endl;
    
    str.erase(3,2); // 3번부터 2글자 지우기
    std::cout << str << std::endl;
    
    str.replace(3,2,"HJHJ"); // 3번부터 2개를 "HJHJ" 로 변경
    std::cout << str << std::endl;
    
    
    
    
    return 0;
}
