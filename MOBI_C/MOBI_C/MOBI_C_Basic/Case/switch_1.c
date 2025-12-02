#include <stdio.h>

int switch_1(void) {
    
    int n = 0;

    scanf("%d\n",&n);
    
    switch( n ){
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        default:
            printf("default");
            break;
    }
    
    if( n == 1){
        printf("1\n");
    }
    else if( n == 2){
        printf("2\n");
    }
    else{
        printf("default");
    }
    
    
    int cmd = 0, a = 0, b= 0;
    
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&cmd);
    
    switch( cmd ){
        case 1:
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case 2:
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case 3:
            printf("%d * %d = %d\n",a,b,a*b);
            break;
        case 4:
            printf("%d / %d = %d\n",a,b,a/b);
            break;
        default:
            printf("error\n");
            break;
    }
    
    
    return 0;
}
