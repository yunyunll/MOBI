#include <stdio.h>
 
int adpoin3(void) {
    int n = 0x11223344;
    
    // void 반환 값이나 인자가 없음
    
    int     *p1 = &n; // 4byte 크기의 정수
    char    *p2 = (char*)&n; // 1byte 크기의 정수 캐스팅이 필요
    void    *p3 = &n; // 주소 정보만 저장 캐스팅 필요없음

    printf("%p\n",p1, p1);
    printf("%p\n",p2, p2);
    printf("%p\n",p3, p3);
    
    printf("%x\n",p1, *p1);
    printf("%x\n",p2, *p2);
    // printf("%x\n",p3, *p3); // 역참조를 했을 때 데이터 정보를 알 수 없음
    
//    *p2; // error
//    p2 = p2 + 1; // error
//    *p2[0] // error
    
//    if(p1 == p2){} // Ok
//
//    int *p3 = (int*)p2; // C : ok  C++ : error
//    char *p4 = (char*)p2;
    
    
    
    
    
    
    

    return 0; // 자동으로 0을 반환
}
