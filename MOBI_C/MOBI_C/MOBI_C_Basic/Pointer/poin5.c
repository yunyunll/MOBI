#include <stdio.h>

void inc5 (int *p){
    ++(*p);
    
    printf("%p\n",p);
    printf("%d\n",*p);
    
}


int poin5(void) {
    
    int n = 10;

    inc5(&n);
    
    printf("%d\n",n);
    
    return 0;
}
