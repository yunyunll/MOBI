#include <stdio.h>


//과제 10개까지 만들어보기


#define COUNT(...) COUNT_IMP(__VA_ARGS__,5,4,3,2,1,0)
#define COUNT_IMP(_1, _2, _3, _4, _5, N, ...) N

#define FE_1(FUNC, X) FUNC(X)
#define FE_2(FUNC, X,...) FUNC(X);FE_1(FUNC,__VA_ARGS__)
#define FE_3(FUNC, X,...) FUNC(X);FE_2(FUNC,__VA_ARGS__)
#define FE_4(FUNC, X,...) FUNC(X);FE_3(FUNC,__VA_ARGS__)
#define FE_5(FUNC, X,...) FUNC(X);FE_4(FUNC,__VA_ARGS__)

void adMac17_show(int a){
    
    printf("show : %d\n", a);
}

#define CONCATENAT(arg1,arg2) CONCATENAT1(arg1,arg2)
#define CONCATENAT1(arg1,arg2) arg1##arg2

#define FOREACH_N(N,FUNC,...) \
CONCATENAT(FE_,N)(FUNC, __VA_ARGS__)

#define FOREACH(FUNC,...) \
FOREACH_N(COUNT(__VA_ARGS__),FUNC, __VA_ARGS__)




int adMac17(void){
    
    int n1 = COUNT(1,2,3,4,5);
    int n2 = COUNT(1,2,3);
    
    FOREACH(adMac17_show,1,2,3);
    

    return 0;
    
}

