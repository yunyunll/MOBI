#include <stdio.h>

int com3_square_int(int a){
    printf("int\n");
    return a * a;
}

int com3_square_double(double a){
    printf("double\n");
    return a * a;
}

#define square(x) _Generic( (x),\
int:com3_square_int,double:com3_square_double)(x)

int Com3(void){
    
    double d = 3.4;
    int n = _Generic(d,int:0, double:1,default:2); // 타입에 따라 변수값이 나옴 타입 : 값
    
    printf("%d\n",n);
    
    com3_square_int(3);
    com3_square_double(3.4);
    
    square(3);
    square(3.4);
    

    return 0;
    
}

