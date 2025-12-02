#include <stdio.h>

int add2(int a,int b){
    
    int c = a + b;
    return c;
}

int div(int a, int b){
    
    if(b == 0){
        return -1;
    }
    
    return a/b;
}


int func2(void) {

    int ret1 = add2(1,2);
    int ret2 = div(1,0);
    
    if(ret2 == -1){
        printf("error\n");
    }
    else{
        printf("%d\n",ret2);
    }
    
    printf("%d\n",ret1);
    
    
    
    return 0;
}
