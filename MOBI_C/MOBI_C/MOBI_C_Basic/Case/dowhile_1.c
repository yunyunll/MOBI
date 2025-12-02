#include <stdio.h>

int dowhile_1(void) {
    
    int n = 10;
    while( n < 10 ){
        printf("while");
    }
    
    
    do{
        printf("do-while");
    }
    while( n < 10 );

    
    int k = 0;
    
    do{
        scanf("%d\n",&k);
    }while(k > 10);
    
    
    return 0;
}
