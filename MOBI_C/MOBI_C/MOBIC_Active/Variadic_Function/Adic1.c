#include <stdio.h>


void adic1_foo(int n,...){ // 가변인자함수(...)
}

void adic1_foo1(int n,...){ // 가변인자함수(...)
    
    int *p = &n + 1;
    printf("%d\n",*p);
    
    
    
    for(int i = 0; i < n; i++){
        printf("%d\n",*p);
        p = p + 1 ;
    }
}

int Adic1(void){
    
    adic1_foo(1);
    adic1_foo(1,2);
    adic1_foo(1,2,3);
    // adic1_foo(); // error
    
    adic1_foo1(7, 10, 20, 30, 40, 50, 60, 70); // push
    
    return 0;
    
}

