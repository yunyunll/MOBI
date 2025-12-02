#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

typedef const int *PTR_TO_CONST;
typedef int *const CONST_PTR;

typedef int *PINT;
typedef PINT const WHERE_CONST;
// typedef const PINT WHERE_CONST;

int adpoin10(void) {
    
    int n1 = 10; // 읽고 쓰기 가능
    int n2 = 10; // 읽고 쓰기 가능
    
    // *를 기준으로 const의 위치를 조사
    // const int  *p1 = &n1; // p1을 따라가면 const
    // int *const  p2 = &n1; // p2가 const

    PTR_TO_CONST p1 = &n1;
    CONST_PTR p2 = &n1;
    
    WHERE_CONST p3 = &n1; // p3 자체가 const
    
//   p3 = &n2;
    *p3 = 20;
    
    
    p1 = &n2;
    // *p1 = 20;
    
    // p2 = &n2;
    *p2 = 20;
    

    
    
    printf("%p\n",p1);
    printf("%d\n",*p2);
    
    
    return 0; // 자동으로 0을 반환
    
}
