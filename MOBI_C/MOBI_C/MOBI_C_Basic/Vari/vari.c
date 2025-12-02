#include <stdio.h>

int vari_1(void) {
    
    int n1;
    n1 = 1;
    
    int a = 0;
    
    int b = 0,c = 0;
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    
    int sum = 0;
    int n = 0;
        
    for(int i = 0; i < 10; i++){
        // int n = 0; 10번 생성되고 10번 파괴된다
        scanf("%d\n",&n);
        sum = sum + n;
    }
    
    printf("%d",sum);
    
    
    
    return 0;
}
