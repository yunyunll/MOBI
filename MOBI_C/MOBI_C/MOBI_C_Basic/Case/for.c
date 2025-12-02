#include <stdio.h>

int for_1(void) {
    
    int count = 0;

    for(count = 0; count < 10; count++){
        printf("%d",count);
        printf("Hello\n");
        
    }
    
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
    
    return 0;
}


