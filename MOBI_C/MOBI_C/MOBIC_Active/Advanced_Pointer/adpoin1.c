#include <stdio.h>
 
int adpoin1(void) {
    int n = 10;
    int c = 0;

    printf("%d\n",n);
    printf("%d\n",sizeof(n));
    printf("%p\n",&n);
    
    int *p = &n;
    
    printf("%p\n",&p);
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%d\n",sizeof(p));
    
    printf("%d\n",sizeof(n));
    printf("%d\n",sizeof(c));

    int *pn = &n;
    int *pc = &c;
    
    // int*,char* 크기는 동일하다
    printf("%d\n",sizeof(pn));
    printf("%d\n",sizeof(pc));
    
    // 포인터 변수의 값에 1을 더하면 자신이 가르키는 대상체의 크기만큼 증가
    printf("%p, %p\n",pn, pn + 1);
    printf("%p, %p\n",pc, pc + 1);
    
    int *pn2 = pn + 1;
    
    // 포인터 - 포인터 = 정수
    printf("%d\n",pn2 - pn);
    // printf("%d\n",pn2 + pn); // 곱셈 나눗셈 덧셈은 허용하지 않음
    
//    pn + 1; // ok
//    pn - 1; // ok
//    pn * 1; // error
//    pn / 1; // error
//
//    pn +pn2; // error
//    pn - pn2; // ok
//    pn * pn2; // error
//    pn / pn2; // error


    return 0; // 자동으로 0을 반환
}
