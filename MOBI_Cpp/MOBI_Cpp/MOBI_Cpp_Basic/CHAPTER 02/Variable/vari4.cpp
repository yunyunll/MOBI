#include <iostream>
#include <string>

// 파싱
// 문자열에 필요한 부분만 추출하는 것
// 현업에서는 간단한 것만
// find, substr

using std::string;

int vari4(){
    
    string text = "This is an ABC example. ABC should be replaced. ABC is here too";
    string from = "ABC";
    string to = "BTSOK";
    

    size_t pos = 0;
    
    while((pos = text.find(from,pos)) != string::npos){
        text.replace(pos, from.length(), to);
        pos += to.length();
    }
    
    
    std::cout << text << std::endl;
    
    
    
    return 0;
}
