#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

int adpoin8(void) {

    int n = 10; // 읽고 쓰기 가능
    int        *p1 = &n;
    const int  *p2 = &n;
    
    const int c = 10;
    
    int        *p3 = &c;
    const int  *p4 = &c;
    
    int        *p5 = (int*)&c;
    
    *p3 = 20; // const를 만들고 나서 상수값을 변경하는 건 안좋음
    
    
    return 0; // 자동으로 0을 반환
}
