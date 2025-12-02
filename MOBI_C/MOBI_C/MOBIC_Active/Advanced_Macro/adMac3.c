#include <stdio.h>

#define VERSION 1000
#define DEBUG

int adMac3(void) {
    
#ifdef DEBUG
    printf("디버그 메세지 \n");
#endif
    
#if VERSION == 1000
    printf("VERSION : 1000\n");
#endif

    return 0; // 자동으로 0을 반환
    
}
