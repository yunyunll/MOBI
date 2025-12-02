#include <stdio.h>

int if_1(void) {
    
    int score = 0;
    
    printf("당신의 점수를 입력해주세요 >> ");
    scanf("%d\n",&score);
    
    if(score >= 70){            // score > 70 70포함 안됨
        printf("합격입니다. \n");
        printf("축하합니다. \n");
    }
    else if(score >= 60){
        printf("재시험입니다. \n");
    }
    else{
        printf("불합격입니다. \n");
    }
    
    
    if(score >= 70){
        printf("합격입니다. \n");
        printf("축하합니다. \n");
    }
    else{
        if(score >= 60){
        printf("재시험입니다. \n");
        }
        else{
            printf("불합격입니다. \n");
        }
    }
    
    return 0;
}
