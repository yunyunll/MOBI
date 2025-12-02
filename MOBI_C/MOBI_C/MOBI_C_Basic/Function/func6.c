#include <stdio.h>

int func6_gret = 0;
int func6_gx = 0;
int func6_gy = 0;

void sum6(void){

    for(int i = func6_gx; i < func6_gy; i++){
        func6_gret += i;
    }
}

//int sum(int a, int b){
//    int s = 0;
//
//    for(int i = a; i < b; i++){
//        s += i;
//    }
//    return s;
//}

int func6(void) {
    
    scanf("%d\n",&func6_gx);
    scanf("%d\n",&func6_gy);
    
    sum6();
    
    printf("%d\n",func6_gret);
    
    return 0;
}
