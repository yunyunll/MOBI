#include <stdio.h>

int dynamic1(void) {
    
    int score[15] = {0};
    
    for(int i = 0; i < 15; i++){
        
        printf("%d번 째 사람, %d번 째 과목\n",i / 5 + 1, i % 5 + 1);
        //scanf("%d", &score[i]);
    }
    
    // 2번째 사람 4번째 과목
    int i = 2;
    int j = 4;
    printf("%d\n" , score[(i-1) * 5 + (j-1)]);
    
    int score2[3][5] = {0};
    
    // 2번째 사람 3번째 과목
    //score2[1][2] = 100;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("%d번 째 사람, %d번 째 과목\n",i + 1, j + 1);
            scanf("%d", &score2[i][j]);}
    }
    
    // 2번째 사람 4번째 과목
    // int i = 2;
    // int j = 4;
    printf("%d\n" , score2[i-1][j-1]) ;
    
    int total[5] = {0};
    // 과목별 합
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            total[i] += score2[j][i];}
        printf("%d\n",total[i]);
    }
    
    
    return 0;
}
