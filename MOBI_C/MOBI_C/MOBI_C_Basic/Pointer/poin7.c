#include <stdio.h>

int poin7(void) {
    
    int x[5] = {1,2,3,4,5};
    
    printf("%d\n",x[0]);
    printf("%d\n",x[1]);
    printf("%d\n",x[2]);
    printf("%d\n",x[3]);
    printf("%d\n",x[4]);

    int *p = x; // &x[0] 암시적 형변환
    
    // printf("%p + &p\n",x,x + 1); // 배열의 첫번째 요소의 주소
    // printf("%p + &p\n",&x,&x + 1); // 배열의 주소
    
    
    *(p+1) = 0;
    p[1] = 0; // 포인터의 배열식 표현

    *(x+1) = 0; // 배열의 포인터식 표현
    x[1] = 0;
    
    p = 0;
    // x = 0;
    
    ++p;
    // ++x;
    
//    printf("%d\n",*p);
//    printf("%d\n",*(p+1));
//    printf("%d\n",*(p+2));
//    printf("%d\n",*(p+3));
//    printf("%d\n",*(p+4));
//
//    // *(p+i) == p[i]
//
//    printf("%d\n",p[0]);
//    printf("%d\n",p[1]);
//    printf("%d\n",p[2]);
//    printf("%d\n",p[3]);
//    printf("%d\n",p[4]);

    
    return 0;
}
