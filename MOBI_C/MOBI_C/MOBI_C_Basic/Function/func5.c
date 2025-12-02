#include <stdio.h>

int func5_g = 0;

void func5_foo(void){
    // int x = 0;
    func5_g = 100;
}


int func5(void) {

    // int n1 = 10;
    
//    if(n1 == 10 ){
//        int n2 = 0;
//    }
    
    // n2 = 20;
    
    int  n = 0;
    func5_foo();
    
    printf("%d\n",func5_g);
    
    printf("%d\n",n);
    
    return 0;
}
