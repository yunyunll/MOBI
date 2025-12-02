#include <iostream>
#include <cstring>

using namespace std;

// 검색 구간의 일반화
//시작 주소와 검색할 요소의 개수를 전달
// 시작 주소와 마지막 요소의 주소를 전달
// [first,last) 시작주소 포함, 마지막 주소 불포함
// 전체 문자열을 표기 estrchr(s, s + strlen(s), 'c');
char* gen1_estrchr(char* first, char* last, char value){
    while (first != last && *first != value) // false while문 탈출
        ++ first;
    
    return first == last ? 0 : first;
}



int gen1(){

    char s[] = "abcdefg";
    
    // 문자열에서 문자를 검색 '\0'(Null) 문자를 만날 때까지 --> 실패시 Null 리턴
    char* p = strchr(s, 'c');
    
    char* p1 = gen1_estrchr(s, s + 4,'c');
    
    if( p1 == 0){
        cout << "fail" << endl;
    }
    else {
        cout << "success : " << *p <<endl;
    }
    
    
    return 0;
}
