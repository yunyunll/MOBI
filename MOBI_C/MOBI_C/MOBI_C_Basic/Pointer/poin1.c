#include <stdio.h>

int poin1(void) {
    
    int n = 0;
    printf("%d\n",n);
    printf("%p\n",&n);
    
    // double d = 3.4;
    
    int num = 10;
    int *pnum = &num;
    
    printf("%d\n",num);
    printf("%p\n",&num);
    
    printf("%p\n",pnum);
    printf("%p\n",&pnum);
    
    printf("%d\n",*pnum);
    
    
    return 0;
}
