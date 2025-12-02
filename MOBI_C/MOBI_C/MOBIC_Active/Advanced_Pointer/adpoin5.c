#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

int adpoin5(void) {
    
    void *p1 = malloc(40);
    
    char *p2 = (char*)malloc(sizeof(char)*40);
    
    int *p3 = (int*)malloc(sizeof(int)*10);
    
    int *p4 = (int*)malloc(sizeof(double)*5);
    
    // 40 바이트를 short의 2차원 배열 4*5
    
    short (*p5)[5] = (short*)malloc(sizeof(short)*10);
    
    printf("%p\n",p1);
    printf("%p\n",p2);
    printf("%p\n",p3);
    printf("%p\n",p4);
    printf("%p\n",p5);
    
    
    return 0; // 자동으로 0을 반환
}
