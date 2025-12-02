#include <stdio.h>

int sum3(int n){
    
    int s = 0;

    for(int i = 0; i <= n; i++){
        s += i;
    }
    
    return s;
}

int func3(void) {

    int n = 0;
    scanf("%d",&n);
    
    int ret = sum3(n);
    printf("%d\n",ret);
    
    return 0;
}
