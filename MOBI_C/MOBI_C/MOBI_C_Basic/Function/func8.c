#include <stdio.h>

void print_hello8(int n){
    
    printf("hello\n");
    
    if(n == 0){
        return;
    }
    print_hello8(n-1);
    
}

int factorial18(int n){
    int s = 1;
    
    for(int i = 1; i <= n; i++){
        s *= i;
    }
    return s;
}

int factorial28(int n){
    if(n == 1) return 1;
    return n * factorial28(n-1);
}
int func8(void) {
    
    print_hello8(2);
    
    int ret1 = factorial18(5);
    printf("%d\n",ret1);
    
    int ret2 = factorial28(2);
    printf("%d\n",ret2);
    
    
    return 0;
}
