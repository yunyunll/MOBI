#include <stdio.h>
#include <assert.h>

//#define assert_foo( expr ) \
//if( !(expr) ) { printf("[] Assertion failed : %s, line %s, line %d\n", \
//#expr, __FILE__, __LINE__);\
//abort();}

void _assert_foo(int age){
    
    //인자의 유효성 확인
    _assert_foo( age > 0);
    
    // 함수인자인 age는 나이 이므로 0보타 크다
}

int adMac12(void){

    _assert_foo(-10);
    
    
    return 0;
    
}

