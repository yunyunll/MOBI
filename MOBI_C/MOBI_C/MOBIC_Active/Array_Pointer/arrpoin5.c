#include <stdio.h>
void arrpoint5_f1(int (*p1)[2]){ // N차 배열을 함수 인자로 전달할면 N-1차 배열을 가리키는 포인터로 받으면 된다
                                // 사용할 때는 N차 배열처럼 사용
    p1[0][0] = 0;
    
}
void arrpoint5_f2(int (*p2)[2][2]){
    p2[0][0][0] = 10;
}

int arrpoin5(void) {
    
    int x1[3][2] = {0};
    int x2[3][2][2] = {0};

    arrpoint5_f1(x1); // 2차배열이므 => 1차 배열을 가리키는 포인터
    arrpoint5_f2(x2); // 3차배열이므 => 2차 배열을 가리키는 포인터
    
    return 0; // 자동으로 0을 반환
    
}
