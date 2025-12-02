#include <stdio.h>

// \ 뒤에 space가 있으면 안됨
#define PRESS_ENTER_KEY() do {printf("Press enter key"); \
getchar();} while(0)

// 여러 문장을 가진 매크로를 가질 때 do while(0) 매크로를 사용한다

int adMac18(void){
    
    
    if(0){
        PRESS_ENTER_KEY();
    }
    else{}
    
    
    printf("end main\n");
    


    return 0;
    
}

