#include <stdio.h>
#include <stdlib.h>

int mall2(void) {
    
    int sz = 0;
    
    printf("학생 수 =>");
    scanf("%d",&sz);
    
    int *score = malloc(sizeof(int) * sz);
    
    for(int i = 0; i < sz; i++){
        printf("%d 번째 점수 => ",i+1);
        scanf("%d",&score[i]);
    }
    
    int total = 0;
    for(int i = 0; i < sz; i++){
        total += score[i];
    }
    
    printf("%d,%d\n",total,total / sz);
    
    free(score);
    

    return 0;
}

