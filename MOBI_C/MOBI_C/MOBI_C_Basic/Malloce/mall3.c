#include <stdio.h>
#include <stdlib.h>

int mall3_g = 0;

void mall3_foo(void){
    int n = 0;
    int *p = malloc(sizeof(int) * 10);
    free(p); // malloc 파괴
} // n,p파괴

int mall3(void) {
    
    mall3_foo();

    return 0;
}
