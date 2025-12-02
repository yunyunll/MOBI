#include <stdio.h>
#include <stdlib.h>

int cnt8 = 0;

void* debug_malloc8(size_t sz,const char *file,const char *func, int line){
    void *p  = malloc(sz);
    ++cnt8;
    
    printf("%s\n",__FILE__); // 파일의 이름
    printf("%d\n",__LINE__); // 줄 번호
    printf("%s\n",__func__); // 함수의 이름

    return p;
}

void debug_free8(void *addr){

    free(addr);
    printf("debug_free\n");
    --cnt8;

}

#define malloc(sz) debug_malloc8(sz,__FILE__,__func__,__LINE__)
#define free(addr) debug_free8(addr)

int adMa8(void){
    //(int*)malloc(sz,file,func,line);
    
    int *p1 = (int*)malloc(sizeof(int)*10);
    int *p2 = (int*)malloc(sizeof(int)*10);
    int *p3 = (int*)malloc(sizeof(int)*10);
    
    free(p1);
    free(p2);
    free(p3);
    
    return 0;
    
}


