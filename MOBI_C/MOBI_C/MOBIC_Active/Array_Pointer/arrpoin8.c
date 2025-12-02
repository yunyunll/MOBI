#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

// 2차원 배열 2개로 2차원을 반환
int (*arrpoin8_add_matrix(int (*p1)[2], int (*p2)[2]))[2]{
    static  int temp [2][2];
    temp [0][0] = p1 [0][0] + p2 [0][0];
    temp [0][1] = p1 [0][1] + p2 [0][1];
    temp [1][0] = p1 [1][0] + p2 [1][0];
    temp [1][1] = p1 [1][1] + p2 [1][1];
    
    return temp;
}



int arrpoin8(void) {
    
    // 할당된 메모리를 char[160]으로 사용
    char *p1 = (char*)malloc(160);
    
    // 할당된 메모리를 int[40]으로 사용
    int *p2 = (int*)malloc(160);
    
    // 할당된 메모리를 int[10][4]으로 사용
    // 2차원 배열 이름 => 1차 배열을 가리키는 포인터 의미
    int(*p3)[10] = (int(*)[4])malloc(160);
    
    // 할당된 메모리를 int[4][5][2]으로 사용
    int(*p4)[5][2] = (int(*)[5][2])malloc(160);

    free(p1);
    free(p2);
    free(p3);
    free(p4);
    
    int x[2][2] = {1,2,3,4};
    int y[2][2] = {5,6,7,8};
    
    int (*ret)[2] = arrpoin8_add_matrix(x,y);
    printf("%d, %d\n",ret[0][0],ret[0][1]);
    printf("%d, %d\n",ret[1][0],ret[1][1]);
    
    int (*ret1)[2] = arrpoin8_add_matrix(y,x);
    printf("%d, %d\n",ret1[0][0],ret1[0][1]);
    printf("%d, %d\n",ret1[1][0],ret1[1][1]);
    
    
    return 0; // 자동으로 0을 반환
    
}
