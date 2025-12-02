#include <stdio.h>

int g1 = 0x11223344;
char g2[] = "abcdefg";

void basi_foo(void){
    static int sx = 0xAABBCCDD;
    int lx = 0x55667788;
    printf("Hello world\n");
}

int basic5(void) {
    
    basi_foo();

    return 0; // 자동으로 0을 반환
}
