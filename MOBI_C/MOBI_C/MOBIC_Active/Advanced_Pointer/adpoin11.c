#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

struct _rect {
    int left, top, right, bottom;
};
typedef struct _rect RECT;

// void ad_poin11(RECT r) // 위험
// void ad_poin11(RECT* r) // 위험
void ad_poin11(const RECT* r) // call by value
{
    
}

int adpoin11(void) {
    
    char s1[] = "hello"; // 문자열 배열
    // char *s2 = "hello"; // 문자열 포인터
    const char *s2 = "hello"; // 문자열 포인터
    *s1 = 'A';
//    *s2 = 'A'; // 상수 메모리인 경우도 있다
    printf("%s\n",s1);
    printf("%s\n",s2);
    
    RECT r;
    ad_poin11(&r);
    
    
    
    return 0; // 자동으로 0을 반환
    
}
