#include <stdio.h>

void print_number9(int n){
    
    if(n == 0) return;
    
    // 호출(2)  호출(1)   호출(0) -> return
    // 3출력    2출력     1출력
    // return  return   return
//    print_number9(n-1);
//    printf("%d\n",n);
    
    // 3출력    2출력     1출력
    // 호출(2)  호출(1)   호출(0) -> return
    // return  return   return
    printf("%d\n",n);
    print_number9(n-1);
}

int func9(void) {
    
    print_number9(3);
    
    return 0;
}
