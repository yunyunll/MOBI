#include <stdio.h>

int str1(void) {
    
    int n1 = 65; // 정수 65부터 사용
    int n2 = 'A';
    
    printf("%d\n",n1);
    printf("%d\n",n1);
    
    printf("%c\n",n2);
    printf("%c\n",n2);
    
    printf("%d\n",9);
    printf("%d\n",'9'); // 문자 9에 할당된 값 57
    
    int n3 = 'A'; // 65
    // int n4 = A; // error
    
    for(int i = 0; i < 128; i++){
        printf("%3d : %c",i,i);
        if(i % 5 == 0){
            printf("\n");
        }
    }
    
    getchar(); // enter 입력 시 내려감
    
    printf("%d\n",7);
    printf("%c\n",7); // bell이 울림
    
    
    
    
    
    

    return 0;
}
