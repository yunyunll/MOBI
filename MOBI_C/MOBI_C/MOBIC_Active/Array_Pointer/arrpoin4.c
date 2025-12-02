#include <stdio.h>
void arrpoint3_f1(int n){}
//void arrpoint3_f2(int a[3]){} // 함수 인자로 배열을 전달할 대 배열 타입으로 받을 수 없다
void arrpoint3_f2(int (*a)[3]){ // 배열의 요소에 접근하기가 복잡해진다.
    // a: 배열의 주소
    // *a : 배열
    *a[0];// 배열의 첫번째 요소
}
void arrpoint3_f4(int *a){
    *a; // 첫번째 요소
    a[0]; // 첫번째 요소
    a[1]; // 두번째 요소
}

int arrpoin4(void) {
    
    int n1 = 10;
    int n2 = n1;
    
    arrpoint3_f1(n1);
    
    int x1[3] = {1,2,3};
//    int x2[3] = x1; // 배열은 복사할 수 없다
    int x2[3];
//    f2(x1);
    arrpoint3_f2(&x1);
    arrpoint3_f4(x1);

    
    return 0; // 자동으로 0을 반환
    
}
