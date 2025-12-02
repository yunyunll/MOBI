#include <iostream>
#include <string.h> // C헤더
#include <string> // STL string
#include <bitset>  // bit를 관리하는 클래스



using namespace std;

int pre4_bit(){
    
    bitset<8> b1 = 0b11110000; // 11110000 // 0b 2진수
    bitset<8> b2; // 0
    bitset<8> b3 = 0xf0; // 11110000
    
    // 각 비트 접근 함수
    
    b1.set(); // 모두 1로
    cout << b1 << endl;
    b1.reset(); // 모두 0으로
    cout << b1 << endl;
    
    b1.set(1); // 0000 0010 // 1번째 비트 1
    cout << b1 << endl;
    b1[2] = 1; // 0000 0110 // 2번째 비트 1
    cout << b1 << endl;
    b1[0].flip(); // 0000 0111 // 0번째 비트 전환
    cout << b1 << endl;
    
    // 각 비트 조사 함수
    
    if( b1.test(1) == true){}
    if( b1[1] == true){}
    
    if( b1.none() == true){}
    
    int n2 = b1.count();
    cout << n2 << endl;
    
    // 각 비트 연산 가능
    
    bitset<8> b5 =  0b00001111;
    bitset<8> b6 =  0b11110000;
    bitset<8> b7 =  b5 | b6 ;
    
    cout << b7 << endl;
    
    
    cout << b1 << endl;
    cout << b2 << endl;
    cout << b3 << endl;
    
    // 각 비트 변환 함수
    
    string s = b1.to_string();
    unsigned long n = b1.to_ulong();
    
    cout << s << endl;
    cout << n << endl;
    
    return 0;
}
