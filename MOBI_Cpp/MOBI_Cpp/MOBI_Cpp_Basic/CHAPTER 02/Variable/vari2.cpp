#include <iostream>
#include <string>

// C언어
//#include <string.ㅗ>
//char buf[10] = "ABCD";
//if(!strcmp(buf,"BBQ")){ // 동일하면
//    // ...
//}

using std::string;

int vari2(){
    
    // string 객체
    // 변수 : 데이터를 저장할 수 있는 메모리 공간의 별칭
    // 객체 : 클래스로 만든 개체, 데이터, 함수를 가지고 있음
    std::string str = "BBQ";
    
    str += "ABC";

    if(str == "BBQ"){
        std::cout << "BBQ문자열" ;
    }else{
        std::cout << str;
    }
    
//    C++ 문자열의 길이
//    str.length();
    
    for(int i = 0; i < str.length(); i++){
        
        // index 접근 및 수정이 가능
        std::cout << str[i] <<" ";
    }
    
    // C언어
    printf("%s", str.c_str());
    
    
    
    
    
    
    return 0;
}
