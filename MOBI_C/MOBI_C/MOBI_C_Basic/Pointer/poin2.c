#include <stdio.h>

int poin2(void) {
    
    int num1 = 10;
    int num2 = 20;
    int *pnum = &num1;
    
    // 에러 확인
    // pnum = 20; // 주소값
    pnum = &num2; // 가능
    
    num2 = 100; // 가능
    // num2 = &num1; // 주소값이 안됨
    
    *pnum = 200; // 가능
    // *num2 = 100; // 포인터 변수를 정수에 사용
    
    
    // 결과 예측
    printf("%d\n",num1); // 10
    printf("%d\n",num2); // 200
    printf("%p\n",&num1); // 주소 그대로
    printf("%p\n",&num2); // 주소그대로
    printf("%p\n",&pnum); // 주소 그대로
    printf("%p\n",pnum); // num2주소
    printf("%d\n",*pnum); // num2 값
    
    
    return 0;
}
