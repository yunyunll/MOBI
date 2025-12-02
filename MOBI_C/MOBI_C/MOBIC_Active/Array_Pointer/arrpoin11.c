#include <stdio.h>
#include <stdlib.h> // malloc
 

int arrpoin11_Add(int a,int b){
    return a + b;
}



int arrpoin11(void) {
    
    int n = 0;
    int x[3] = {1,2,3};
    
    arrpoin11_Add(1,2);
    int (*f)(int,int) = &arrpoin11_Add;
    // f : 함수를 가리키는 포인터
    // *f : 함수
    (*f)(1,2);
    // *f(1,2); // error
    f(1,2); // Add(1,2) 의미 가능
    (&arrpoin11_Add)(1,2); // Add(1,2) 의미 가능
    
    printf("%d\n",(*f)(1,2)) ;

    
    return 0; // 자동으로 0을 반환
    
}
