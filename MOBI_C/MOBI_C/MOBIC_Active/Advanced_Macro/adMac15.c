#include <stdio.h>

#define FE_1(FUNC, X) FUNC(X)
#define FE_2(FUNC, X,...) FUNC(X);FE_1(FUNC,__VA_ARGS__)
#define FE_3(FUNC, X,...) FUNC(X);FE_2(FUNC,__VA_ARGS__)
#define FE_4(FUNC, X,...) FUNC(X);FE_3(FUNC,__VA_ARGS__)
#define FE_5(FUNC, X,...) FUNC(X);FE_4(FUNC,__VA_ARGS__)

void adMac15_show(int a){
    
    printf("show : %d\n", a);
}


int adMac15(void){
    
    int n1 = 10;
    int n2 = 20;
    
    FE_1(adMac15_show, 1);
    FE_2(adMac15_show, 1,2);
    FE_3(adMac15_show, 1,2,3);
    FE_4(adMac15_show, 1,2,3,4);
    FE_5(adMac15_show, 1,2,3,4,5);
    

    return 0;
    
}

