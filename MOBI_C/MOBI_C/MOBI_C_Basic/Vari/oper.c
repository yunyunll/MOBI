#include <stdio.h>

int oper(void) {
    
    int a = 1;
    int b = 2;
    
    int c = a + b * 3 + -2;
    int d = a + b + a - b;
    
    printf("%d\n",10/3);
    printf("%d\n",10%3);
    printf("%d\n",c);
    printf("%d\n",d);
    
    b += 1; // b = b + 1;
    printf("%d\n",b);
    
    int n1 = 10;
    int n2 = 10;
    
    int n3 = ++n1; // n1 = 11 n3 = 11
    int n4 = n2++; // n2 = 11 n4 = 10
    
    printf("%d\n",n1);
    printf("%d\n",n2);
    printf("%d\n",n3);
    printf("%d\n",n4);
    
    return 0;
}
