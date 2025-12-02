#include <stdio.h>

int scan(void) {
    
    int age = 0;
    
    printf("나이를 입력해주세요 >> ");
    scanf("%d\n",&age);
    printf("%d\n",age);
    
    int num1 = 0;
    int num2 = 0;
    
    printf("첫번째 정수를 입력해주세요 >> ");
    scanf("%d\n",&num1);
    
    printf("두번째 정수를 입력해주세요 >> ");
    scanf("%d\n",&num2);
    
    
    printf("%d\n + %d\n = %d\n",num1,num2,num1+num2);

    
    
    
    return 0;
}
