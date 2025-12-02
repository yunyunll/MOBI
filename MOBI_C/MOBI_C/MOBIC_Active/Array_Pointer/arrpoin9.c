#include <stdio.h>
#include <stdlib.h> // malloc

int n;
double d;
int ar[2];
int(*p)[2];

typedef int INT;
typedef double DOUBLE;
typedef int AR[2]; // 배열 타입
typedef int(*PAR)[2]; // 배열을 가리키는 포인터 타입

// 2차원 배열 2개로 2차원을 반환
//int (*arrpoin9_add_matrix(int (*p1)[2], int (*p2)[2]))[2]{
AR* arrpoin9_add_matrix(AR* p1, AR *p2) {
//PAR arrpoin9_add_matrix(PAR p1, PAR p2) {
    static  int temp [2][2];
    temp [0][0] = p1 [0][0] + p2 [0][0];
    temp [0][1] = p1 [0][1] + p2 [0][1];
    temp [1][0] = p1 [1][0] + p2 [1][0] ;
    temp [1][1] = p1 [1][1] + p2 [1][1];
    
    return temp;
}



int arrpoin9(void) {
    
    AR x1 = {1,2}; // int x1[2] = {1,2};
    
    int x2[3][2] = {1,2,3,4,5,6,7};
    
    int(*p1)[2] = x2;
    AR*p2 = x2;
    PAR p3 = x2;
    
    int x[2][2] = {1,2,3,4};
    int y[2][2] = {5,6,7,8};
    
    // int (*ret)[2] = arrpoin9_add_matrix(x,y);
    PAR ret = arrpoin9_add_matrix(x,y);
    printf("%d, %d\n",ret[0][0],ret[0][1]);
    printf("%d, %d\n",ret[1][0],ret[1][1]);
    
    AR* ret1 = arrpoin9_add_matrix(y,x);
    printf("%d, %d\n",ret1[0][0],ret1[0][1]);
    printf("%d, %d\n",ret1[1][0],ret1[1][1]);
    
    
    return 0; // 자동으로 0을 반환
    
}
