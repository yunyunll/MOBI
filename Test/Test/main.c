#include <stdio.h>

#ifdef __unix__
#define asm_main _asm_main
#endif

int asm_main(void);

int main(void) {
    
    int result = asm_main(); 

    printf("Result: %d\n", result );
    
    return 0;
}
