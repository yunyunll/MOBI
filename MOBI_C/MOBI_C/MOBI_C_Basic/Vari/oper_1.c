#include <stdio.h>

int oper_1(void) {
    
    int num = 0;
    num = 10;
    
    printf("%d\n",num);
    printf("%p\n",&num); // 주소값은 8자리로 나올 수 있게 p를 사용하는 것이 좋음
    /*
    printf("%d\n",sizeof num);
    printf("%d\n",sizeof(num));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(double));
     */
    
    
    
    return 0;
}
