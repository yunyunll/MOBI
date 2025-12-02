#include <stdio.h>

int arrpoin1(void) {
    
    int x[3] = {10,20,30};
    
    printf("%d\n",x[0]);
    printf("%p\n",x); // 주소 배열의 이름은 배열 첫번째 요소의 주소

    int n = 10;
    double d =3.4;
    
    // 포인터 변수 p1(n), p2(d), p3(x) 를 만드세요
    int *p1 = &n;
    double *p2 = &d;
    // int *p3[3] = &x; // 우선순위 관계로 배열로 처리 -> 포인터 배열
    int (*p3)[3] = &x; // 배열을 가리키는 포인터
    
    
    
    
    int *p = x;
    
    
    return 0; // 자동으로 0을 반환
    
}
