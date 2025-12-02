#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

int adpoin9(void) {
    
    int n = 10; // 읽고 쓰기 가능
    
    // *를 기준으로 const의 위치를 조사
    const int  *p1 = &n; // 상수를 가리키는 포인트
    int *const  p2 = &n; // p2가 const p2를 따라가면 int -> 상수 포인트
    
    int const *p3 = &n; // p1과 동일
    
//    const 해석 방법
//    *을 기준으로 const의 위치파악
//    p1,p3 Pointer to constrant
//    p2 Constrant Pointer
    
    int n2 = 0;
    p1 = &n2;
//    *p1 = 20; //
    
//    p2 = &n2; //
    *p2 = 20;
    
    
    printf("%p\n",p1);
    printf("%d\n",*p2);
    
    
    const int c1 = 10;
    int const c2 = 20;
    
    return 0; // 자동으로 0을 반환
    
}

