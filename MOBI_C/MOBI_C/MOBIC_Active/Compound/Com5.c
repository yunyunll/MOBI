#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h>
#include <stddef.h> // offsetof

struct _Packet{
    int type;
    int size;
    char data[]; // 공식적 표준 flexible array
//    char data[0];
//    char data[1];
//    char *data[12];
};

typedef struct _Packet PACKET;

int Com5(void){
    
    int x[0]; // gcc : ok , cl : error
    int size = 10;
    int y[size]; // 배열의 크기를 변수도 OK cl : error c++ 지원하지 않음

    printf("%d\n",sizeof(PACKET));
    
    PACKET *p = (PACKET*)malloc(sizeof(PACKET) + sizeof(char)*100);
//    PACKET *p = (PACKET*)malloc(offsetof(PACKET,data) + sizeof(char)*100);
        
    
    p->type = 1;
    p->size = 100;
    p->data[0] = 100;
    
    
//    printf("%s\n",typename(s));

    return 0;
    
}

