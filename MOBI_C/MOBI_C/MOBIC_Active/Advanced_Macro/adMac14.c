#include <stdio.h>
#include <assert.h>

#ifdef DEBUG
#define TRACE(msg) printf(msg)
#define TRACE1(msg, a) printf(msg, a)
#define TRACE2(msg, a, b) printf(msg, a, b)
#else
#define TRACE(msg)
#define TRACE1(msg, a)
#define TRACE2(msg, a, b)
#endif

//#ifdef DEBUG
//#define TRACE(...) printf(__VA__ARGS__)
//#else
//#define TRACE(msg)
//#endif



int adMac14(void){
    
    int n1 = 10;
    int n2 = 20;
    
    TRACE("디버그 메세지\n");
    TRACE1("n1 = %d\n",n1);
    TRACE2("n1 = %d, n2 = %d\n",n1,n2);

    return 0;
    
}

