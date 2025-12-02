#include <stdio.h>

int adMac4(void) {
    
    printf("compiler is  \n");
    
#ifdef __GNUC__
    printf("gcc \n");
#endif
    
#ifdef _MSC_VER
    printf("cl \n");
#endif
    
    return 0; // 자동으로 0을 반환
    
}
