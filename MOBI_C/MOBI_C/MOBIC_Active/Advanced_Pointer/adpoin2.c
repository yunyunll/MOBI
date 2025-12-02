#include <stdio.h>
 
int adpoin2(void) {
    int n = 0x11223344;
    
    int     *p1 = &n; // 4byte 크기의 정수
    char    *p2 = &n; // 1byte 크기의 정수
    // char    *p2 = (char*)&n; // 1byte 크기의 정수
    short   *p3 = (short*)&n; // 2byte 크기의 정수 // 메모리의 해석 방식을 바꾼다는 것을 이야기해주기
    float   *p4 = &n; // 4byte 크기의 실수

    printf("%p : %x\n",p1, *p1);
    printf("%p : %x\n",p2, *p2);
    printf("%p : %x\n",p3, *p3);
    printf("%p : %f\n",p4, *p4);
    
    
    

    return 0; // 자동으로 0을 반환
}
