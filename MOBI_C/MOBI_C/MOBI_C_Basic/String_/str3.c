#include <stdio.h>

int str3(void) {
    
    char s1[] = "HELLO"; // 문자열 배열
    char *s2 = "HELLO"; // 문자열 포인터 stack 외부에 저장 읽기 전용
    
    printf("%s\n",s1);
    printf("%s\n",s2);
    
    printf("%d\n",sizeof(s1)); //6
    printf("%d\n",sizeof(s2)); // 4바이트
    
    s1[0] = 'x';
    // s2[0] = 'x'; runtime 오류
    
    printf("end\n");
    
    char *s3 = "welcome";
    // const char *s4 = "welcome";
    
    // s3[0] = 'x';
    // s4[0] = 'x';

    printf("end\n");
    
    

    return 0;
}
