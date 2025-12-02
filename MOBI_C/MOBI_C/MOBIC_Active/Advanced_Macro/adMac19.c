#include <stdio.h>

struct People
{
    char name[8];
    int age;
    int height;
};
typedef struct People PEOPLE;

//#define offsetof( TYPE,MEMBER) \
//(size_t)&(((TYPE*)0)->MEMBER);

#include <stddef.h>

int adMac19(void){
    
    int n2 = offsetof(PEOPLE, height);
    printf("%d\n",n2);
    
    int *p1 = 0;
    int *p2 = (int*)1000;

    // *p = 100; //error
    
    printf("%p\n",p1);
    
    PEOPLE pe;
    printf("%p\n",&pe);
    printf("%p\n",&(pe.age));
    
    PEOPLE *p = 0;
    printf("%p\n",p1);
    
    // p->age = 10; // error
    printf("%p\n",&(p->age));
    
    size_t n = (size_t)&(((PEOPLE*)0)->age);
    printf("%d\n",n);
    
    
    

    
    
    
    return 0;
    
}

