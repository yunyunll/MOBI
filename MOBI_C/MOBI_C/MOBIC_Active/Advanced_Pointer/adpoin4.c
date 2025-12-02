#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

//void swap(void *x, void *y,size_t es ){
//
//    char *pc1 = (char*)x;
//    char *pc2 = (char*)y;
//
//    for( int i = 0; i < es; i++){
//        char temp = pc1[i];
//        pc1[i] = pc2[i];
//        pc2[i] = temp;
//    }
//}
void adpoin_swap(void *x, void *y,size_t es ){
    
    // es 크기의 버퍼
    void *temp = malloc(es);
    
    memcpy(temp,x,es);
    memcpy(x,y,es);
    memcpy(y,temp,es);
    
    free(temp);
    
}


int adpoin4(void) {
    
    double a = 10;
    double b = 20;
    
    adpoin_swap(&a,& b, sizeof(a));

    printf("%f %f\n",a, b);
    

    return 0; // 자동으로 0을 반환
}
