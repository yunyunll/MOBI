#include <stdio.h>

int while_1(void) {
    
    int count = 0;
    
    while( count < 10 ){
        printf("hello");
        printf("%d\n",count);
        
        ++count;
    }
    
    int n = 1;
    
    while( n <= 100 ){
        //if( n % 2 == 1){
         //   printf("%d\n",n);
        //}
        printf("%d\n",n);
        n += 2; // n = n + 2
    }
    
    return 0;
}
