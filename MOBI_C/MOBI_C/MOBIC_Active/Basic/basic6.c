#include <stdio.h>

int basic6(void) {
    
    int n1 = 0x11223344; // 0x44332211
    int n2 = 0x44; // 11 22 33 44 빅 엔디언
                   // 44 33 22 11 리틀 엔디언
                   // 11 44 22 33 미들 엔디언
    
    char *p = (char*)&n1;
    if( *p == 0x11){
        printf("Big Endian\n");
    }
    else if( *p == 0x44){
        printf("Little Endian\n");
    }
    else{
        printf("Unknown Endian\n");
    }
    
    int n3 = htonl(n1); // host to network long
    int n4 = ntohl(n1); // network to host long
    
    printf("%x\n",n1); // 0x11223344
    printf("%x\n",n3); // 0x44332211
    printf("%x\n",n4); // 0x44332211
    
    for (int i = 0; i < 4; ++i) {
        printf("byte %d: %x\n", i, p[i]);
    }



    return 0; // 자동으로 0을 반환
}
