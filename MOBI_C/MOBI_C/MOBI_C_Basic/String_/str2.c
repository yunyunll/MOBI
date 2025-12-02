#include <stdio.h>

int str2(void) {
    
    int c1 = 'A';
    
    char s1[5] = {65,66,67,68,69};
    char s2[6] = {'A','B','C','D','E',0};
    
    printf("%d\n",s1[0]);
    printf("%c\n",s1[0]);
    
    // 문자열 전체 출력
    printf("%c%c%c%c%c\n",s1[0],s1[1],s1[2],s1[3],s1[4]);
    
    printf("%d\n",s1); // 주소를 10진수로
    printf("%p\n",s1); // 주소를 16진수로
    printf("%s\n",s1); // 모든 문자열은 Null 문자로 끝나야한다
    
    char s3[6] = {'H','E','L','L','O','\0'};
    char s4[] = {'H','E','L','L','O','\0'};
    char s5[] = "HELLO";
    
    printf("%s\n",s3);
    printf("%s\n",s4);
    printf("%s\n",s5);
    
    printf("%d\n",sizeof(s3));
    printf("%d\n",sizeof(s4));
    printf("%d\n",sizeof(s5));
    
    printf("%d\n",'A');
    printf("%d\n","A"); // ""주소를 출력
    
    printf("%c\n",'A');
    // printf("%c\n","A"); // 주소를 ASCII코드값
    
    // printf("%s\n",'A'); // %s는 메모리 주소에 있는 값을 아스키 코드로 취급해서 문자출력
    printf("%s\n","A");
    
    

    return 0;
}
