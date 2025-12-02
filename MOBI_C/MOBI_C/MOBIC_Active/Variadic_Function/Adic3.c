#include <stdio.h>
#include <stdarg.h>

void minprintf(char *fmt,...);

int adic3_Sum(int cnt,...){ // 가변인자함수(...)
    
    int s = 0;
    va_list args;
    va_start(args,cnt);
    
    for(int i = 0; i < cnt; i++){
        
        s = s + va_arg(args , int);
    }
        
        
        va_end(args); // args = 0;
        return s;
        
    }

int Adic3(void){
    
    int s = adic3_Sum(5, 1, 2, 3, 4,5); // push
    
    printf("%d\n",s);
    
    int n = 0;
    double d = 3.4;
    char *s1 = "hello";
    
    minprintf("hello\n");
    minprintf("%d, %f, %s\n",n,d,s1);
    
    
    return 0;
    
}

void minprintf(char *fmt,...){
    va_list args;
    char *p, *sval;
    int ival;
    double dval;
    
    va_start(args,fmt);
    
    for(p = fmt;*p;p++){
        if(*p != '%'){
            putchar(*p);
            continue;
        }
        
        switch(*++p){
            case 'd':
                ival = va_arg(args,int);
                printf("%d",ival);
                break;
            case 'f':
                dval = va_arg(args,double);
                printf("%f",dval);
                break;
            case 's':
                for(sval = va_arg(args,char *); *sval; sval++)
                    putchar(*sval);
                break;
            default:
                putchar(*p);
                break;
        }
    }
    
    va_end(args); // args = 0;
}

