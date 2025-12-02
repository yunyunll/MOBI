#include <stdio.h>
#include <stdarg.h>

#define _INTSIZEOF(n)\
((sizeof(n) + sizeof(int) - 1) & ~(sizeof(int)-1))

void adic4_foo(int n1, char c, short s, double d){
    int *p = &n1 + 1;
    // 결국 int단위로 4byte 할당
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));
}
    
    

int Adic4(void){
    
    int n = 10;
    char c = 20;
    short s = 30;
    double d  = 40;
    
    adic4_foo(n, c, s, d);
    
    
    printf("%d\n",_INTSIZEOF(c));
    // 1 + 4 - 1 => 4 & 하위 2비트를 0으로 => 4
    
    printf("%d\n",_INTSIZEOF(s));
    // 2 + 4 - 1 => 5(101) & 하위 2비트를 0으로 => 4
    
    printf("%d\n",_INTSIZEOF(n));
    // 4 + 4 - 1 => 7(111) & 하위 2비트를 0으로 => 4
    
    printf("%d\n",_INTSIZEOF(d));
    // 8 + 4 - 1 => 11(1011) & 하위 2비트를 0으로 => 4
    
    return 0;
    
}
