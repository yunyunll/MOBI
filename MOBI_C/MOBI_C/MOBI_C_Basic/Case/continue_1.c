#include <stdio.h>

int continue_1(void) {
    
    int count = 0;
    
    while( count < 10 ){
        ++count;
        printf("hello");
        printf("%d\n",count);
        
        continue;
        //printf("world\n");
        //++count;
    }
    
    int n = 0;
    int sum = 0;
    int oddsum = 0;
    
    while(1){
        scanf("%d",&n);
        
        if( n == -1){
            break;
        }
        sum = sum + n;
        
        //if( n % 2 == 1){
         //   printf("홀수");
          //  oddsum = oddsum +n;
        //}
        if( n % 2 == 0){
            continue;
        }
        printf("홀수");
        printf("%d\n",n);
        oddsum = oddsum +n;
        
    }
    
    printf("%d\n",sum);
    printf("%d\n",oddsum);
 
    
    return 0;
}

