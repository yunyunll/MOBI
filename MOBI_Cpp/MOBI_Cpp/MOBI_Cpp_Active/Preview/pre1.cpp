#include <iostream>
#include <string.h> // C헤더
#include <string> // STL string

using namespace std;

int pre1_string(){
//    char s1[10] = "hello";
//    char s2[10];
    
    string s1 = "hello";
    string s2;
//    std::string // 일반 변수와 유사하게 사용
    
    s2 = s1; // strcpy(s2,c1)
    
    
    if (s1 == s2){ // strcmp(s1,s2)
    }
       
    
    // C문자열로 변환
    
    string s5 = s1 + s2;
    
    cout << s5 << endl;
    
    
    string s3 = "hello";
    char s4[10];
    
    // strcpy(s3, s4) // string => const char* 변환
    
    strcpy(s4, s3.c_str()); // s3.data()
    
    
    // 정수/실수로 변환
    // 정수 변환 => stoi, stol, stoll, stoul, stoull
    // 실수 변환 => stof, stod, stold
    // 정수/실수 => string : to_string(), to_wstring()
    
    string s6 = "3.4";
    double d = stod(s6);
    cout << d << endl;
    
    string s7 = to_string(5.4);
    
    cout << s6 << endl;
    cout << s7 << endl;
    
    return 0;
}
