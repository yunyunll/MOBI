#include <stdio.h>

#define ARR_SIZE 10
#define MAX 32
#define PI 3.14
#define SQUARE(x) (x) * (x)

//int square(int n){
//    return n * n;
//}

int mac1(void) {
    
    int x[ARR_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    
    for(int i = 0; i < ARR_SIZE; i++){
        
        printf("%d\n",x[i]);
        
    }
    double radius = 3;
    double area = radius * radius * PI;
    
#undef ARR_SIZE // 정의된 상수 제거
    
    int n = SQUARE(3); // int n = 3 * 3;
    double b = SQUARE(3.4); // double n = 3.4 * 3.4;
    
    int n1 = SQUARE(3+1); // int n = 3 + 1 * 3 + 1;  ---> 7
    int n2 = SQUARE(3+1); // int n = (3 + 1) * (3 + 1);  ---> 16
    int a = 3;
    int n3 = SQUARE(++a); // int n = (4) * (5)  ---> 20
    
    printf("%d\n",n);
    
    printf("%d\n",n1);
    printf("%d\n",n2);
    printf("%d\n",n3);
    return 0;
}
