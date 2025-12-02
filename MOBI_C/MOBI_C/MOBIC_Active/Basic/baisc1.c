#include <stdio.h>
#include "bas_foo.h" // 호출부와 구현부를 연결하는 건 링커가 함

#define MAX 256

int basic1(void) {
    
    printf("Hello ,C\n");
    
    bas_foo(100);
    
    char msg[MAX] = "Hello\n";
    printf("%s\n",msg);

    return 0; // 자동으로 0을 반환
}

