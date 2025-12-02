#include <stdio.h>

#define print_value1( x ) printf("%s = %d\n",#x,x) // #x 매크로 인자를 문자열로 치환
#define print_value2( x ) printf("%d, %d\n",x##1,x##2) // 2개의 토큰을 붙여서 치환

#define MAX 256
#define TOSTR2(x) #x
#define TOSTR(x) TOSTR2(x)

#define LOG ( desc ) \
(__FILE__ "("TOSTR(__LINE__) " ): " desc)

int adMAC10(void){
    
    int value1 = 10;
    int value2 = 20;
    
    print_value1( value1 / 2);
    // printf("%s = %d\n","value1 /2",value1 /2);
    print_value2( value );
    // printf("%s = %d\n","value1",value2);
    
    TOSTR2(AAA); // "AAA"
    TOSTR2(MAX); // "MAX"
    TOSTR2(__LINE__); // __LINE__
    
    TOSTR(AAA); // "AAA"
    TOSTR(MAX); // "256"
    TOSTR(__LINE__); // "9"
    
// #pragma message LOG("이 부분은 언젠가 수정")

    
    
    
    
    
    
    
    return 0;
    
}


