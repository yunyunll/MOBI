#include <stdio.h>

void printf_menu(void){
    
    printf("[메뉴]\n");
    printf("1. 칼국수\n");
    printf("2. 비빔밥\n");
    printf("3. 떡볶이\n");
    
    return ;
}

int func1(void) {

    printf("hello\n");
    printf_menu();
    
    printf("hello\n");
    printf_menu();
    
    printf_menu();
    
    
    
    return 0;
}

