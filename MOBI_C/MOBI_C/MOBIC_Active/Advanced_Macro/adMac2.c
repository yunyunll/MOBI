#include <stdio.h>

#define VERSION 1000
#define DEBUG
#undef DEBUG

int adMac2(void) {
    
    
    int value = 10;
    
#ifdef DEBUG
    printf("%d \n",value);
#else
    
#endif

#ifndef DEBUG // if not define
    
#endif
    
#if VERSION < 1000
    printf("1000 보다 작은 경우\n");
#elif VERSION == 1000
    printf("1000 \n");
#else
    printf("1000 보다 큰 경우\n");
#endif
    
#if 0
    printf("이 부분을 주석처리하고 싶을 때\n");
#endif
    

    
    return 0; // 자동으로 0을 반환
    
}
