#include <stdio.h>

// int cnt = 0; // 전역 변수

int get_wait_number7(void){
    
    // int cnt = 0; 지역 변수
    int static cnt = 0; // static 지역 변수
    cnt++;
    return cnt;
    }

int func7(void) {
    
    int n = get_wait_number7();
    
    printf("%d\n",n);
    
    printf("%d\n",get_wait_number7());
    
    printf("%d\n",get_wait_number7());
    printf("%d\n",get_wait_number7());
    
    return 0;
}
