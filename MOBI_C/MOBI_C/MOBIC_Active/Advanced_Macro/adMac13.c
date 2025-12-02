#include <stdio.h>
#include <assert.h>

#define static_assert(expr) \
char __static_assert_failed[(expr) ? 1 : -1];

// C++예시
// static_assert(sizeof(int*) == 8, "not 64bit compiler" );
static_assert(sizeof(int*) == 8);


void adMac13_foo(int age){
    assert(age > 0);
}

int adMac13(void){

    adMac13_foo(-10);
    
    
    return 0;
    
}

