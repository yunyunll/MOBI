#include <stdio.h>

int dynamic2(void) {

    int x1[12]      = {0};
    int x2[2][6]     = {0};
    int x3[3][4]     = {0};
    int x4[2][3][2] = {0};
    
    // 7번째 접급
    x1[6] = 7;
    x2[1][0] = 7;
    x3[1][2] = 7;
    x4[1][0][0] = 7;
    
//    int x[6] = {1,2,3,4,5,6};
//    int y1[3][2] = {1,2,3,4,5,6};
//    int y2[3][2] = {{1,2},{3,4},{5,6}};
//    int y3 = {0};
    
    int block[4][4] = {
        0,0,0,0,
        0,1,0,0,
        0,1,1,1,
        0,0,0,0};
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(block[i][j] == 1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
