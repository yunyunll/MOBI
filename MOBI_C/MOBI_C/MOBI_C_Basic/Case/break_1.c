#include <stdio.h>

int break_1(void) {
    
    int count = 0;
    
    while( count < 10 ){
        printf("hello");
        printf("%d\n",count);
        
        if(count == 5){
            break;
        }
        ++count;
    }
    
    int n = 0;
    int sum = 0;
    
    while(1){
        scanf("%d",&n);
        
        if( n == -1){
            break;
        }

        sum = sum +n;
    }
    printf("%d\n",sum);
    
    
    return 0;
}
