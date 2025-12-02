#include <stdio.h>

int ffoorr(void) {
    
    int j = 1;
    /*
    while( j < 10 ){
        printf("2 * %d = %d\n", j,2*j);
        j++;
    }
    */
    j = 0;
    int i = 0;
  /*  while( i < 10 ){
        j = 1;
        while(j < 10){
            printf("%d * %d = %d\n",i, j, i*j);
            j++; // j = 10이여 1로 초기화 필요
        }
        i++;
    }
   */
    while(i < 10){
        //while(j < i){
        while(j < 10 -  i){
            printf("*");
            j++;
        }
        j = 0;
        printf(" \n");
        
        ++i;
    }
    
    
    
    
    return 0;
}

