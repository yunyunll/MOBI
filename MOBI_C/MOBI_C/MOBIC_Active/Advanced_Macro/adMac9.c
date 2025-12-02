#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _alloc_info9
{
    char file[256];
    char func[256];
    int line;
    char *addr;
    size_t size;
    
};
typedef struct _alloc_info9 ALLOC_INFO;

ALLOC_INFO info[1000];
int cnt9 = 0;

void* debug_malloc9(size_t sz,const char *file,const char *func, int line){
    
    void *p  = malloc(sz);
    
    strcpy(info[cnt9].file,file);
    strcpy(info[cnt9].func,func);
    info[cnt9].line = line;
    info[cnt9].addr = p;
    info[cnt9].size = sz;
    ++cnt9;

    return p;
}

void debug_free9(void *addr){
    
    for(int i = 0; i < cnt9; i++){
        if(info[i].addr == addr){
            info[i] = info[cnt9 - 1]; // i번째 제거
            free(addr);
            --cnt9;
            return;
        }
    }
    printf("debug_free error. bad address\n");
}

void debug_check9(){
    if (cnt9 == 0){
        printf("no memory leak\n");
        return;
    }
    
    printf("found %d memory leak\n",cnt9);
    
    for(int i = 0; i < cnt9; i++){
        printf("%s(function %s,line no.%d) : addr %p,%d byte",
               info[i].file, info[i].func, info[i].line, info[i].addr, info[i].size);
    }
}


#define malloc(sz) debug_malloc9(sz,__FILE__,__func__,__LINE__)
#define free(addr) debug_free9(addr)

int adMac9(void){
    
    int *p1 = (int*)malloc(sizeof(int)*10);
    int *p2 = (int*)malloc(sizeof(int)*10);
    int *p3 = (int*)malloc(sizeof(int)*10);
    
    free(p1);
    free(p2);
    free(p3);
    debug_check9();

    
    return 0;
    
}


