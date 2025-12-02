#include <stdio.h>
#include <stdlib.h> // malloc


void arrpoin10_foo(int a);



int arrpoin10(void) {
    
    int n = 0;
    int x[3] = {1,2,3};
    
    printf("%p\n",&n); // n의 주소
    printf("%d\n",n); // n의 값
    
    printf("%p\n",&x); // 배열의 주소
    printf("%p\n",x); // 요소의 주소
    
    printf("%p\n",&arrpoin10_foo); // 함수의 주소
    printf("%p\n",arrpoin10_foo); // 함수의 주소
    
    arrpoin10_foo(10);
    
    int *p1 = &n;
    int (*p2)[3] = &x;
    void (*p3)(int) = &arrpoin10_foo;
    
    printf("%p\n",p1);
    printf("%p\n",p2);
    printf("%p\n",p3);

    return 0; // 자동으로 0을 반환
    
}

void arrpoin10_foo(int a){
    printf("foo : %d\n",a);
}
