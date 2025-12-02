#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

int adpoin7(void) {

    int n1 = 10;
    n1 = 20;
    
    const int c1 = 10;
    // c1 = 20; // error
    const int c2 = 20;
    int const c3 = 10; // 둘 다 상관없음
    const int c4;
    printf("%p\n",c4);
    
    int n = 0; // 읽고 쓰기 가능
    int *p1 = &n;
    char *p2 = (char*)&n;
    const int *p3 = &n; // 읽기만 하겠다
    
    printf("%p\n",p1);
    printf("%p\n",p2);
    printf("%p\n",p3);
     
    n = 30;
    // *p3 = 30; // error
    
    
    return 0; // 자동으로 0을 반환
}
