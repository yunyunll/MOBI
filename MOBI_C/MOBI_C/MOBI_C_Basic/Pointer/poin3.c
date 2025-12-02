#include <stdio.h>

int poin3(void) {
    
    int n1 = 10;
    
    printf("%d,%d\n",n1, n1+1);
    
    int x[5] = {1,2,3,4,5};
    
    // int n = x[1];
    int *p = &x[1];
    
    printf("%d,%d\n",*p, *(p+1));
    printf("%p,%p\n",p, p+1);
    
    
    int *p1 = &x[1];
    // int *p2 = &x[3];
    
    printf("%p\n",p1 + 1);
    // printf("%p\n",p1 + p2);
    
    printf("%p\n",p1 - 1);
    // printf("%p\n",p2 - p1);
    
    // printf("%p\n",p2 * 1);
    // printf("%p\n",p2 * p1);
    
    // printf("%p\n",p1 / 1);
    // printf("%p\n",p2 / p1);

    return 0;
}
