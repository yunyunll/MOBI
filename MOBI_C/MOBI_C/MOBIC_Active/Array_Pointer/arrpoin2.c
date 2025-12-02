#include <stdio.h>

int arrpoin2(void) {
    
    int n = 10;
    
    printf("%d\n",n); // 값
    printf("%p\n",&n); // 주소
    
    
    int x[3] = {10,20,30};
    
    printf("%p\n",&x); // 배열의 주소
    printf("%p\n",x); // 값이 아니라 주소

    int (*p1)[3] = &x; // 배열의 주소
    int *p2 = x; // 배열이 아닌 첫번째 요소의 주소
    
    printf("%p, %p\n",p1,p1+1);  // 1000, 1012
    printf("%p, %p\n",p2,p2+1);  // 1000, 1004
    
    int *p3 = *p1; // *(배열을 가리키는 포인터) => 배열(첫번째 요소의 주소)
    int p4 = *p2; // => *(int*) => int ,10
    
    int n2 =  **p1; // *(배열을 가리키는 포인터) => 배열(첫번째 요소의 주소) => 1번째 요소 => 10
    // **p2 // => *(int*) => *(int) => error
    
    
    
    
    return 0; // 자동으로 0을 반환
    
}
