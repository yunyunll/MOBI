#include <stdio.h>

int if_2(void) {
    
    int n = 0;

    scanf("%d\n",&n);
    
    if( n % 2 == 0){            // score > 70 70포함 안됨
        printf("짝수입니다. \n");
    }
    else{
        printf("홀수입니다. \n");
    }
    
    int score = 0;

    scanf("%d\n",&score);
    
    if( score >= 71 && score <= 80){            // score > 70 70포함 안됨
        printf("참. \n");
    }
    else{
        printf("거짓. \n");
    }
    
    int a = 10;
    int b = 10;
    
    //  if(a == 15 || ++b == 11) OR일 때는 앞조건이 false여아 뒤 조건 확인
    //  if(a == 1 && ++b == 11) AND일 때는 앞조건이 true여야 뒤 조건 확인
    if(a == 10 || ++b == 11){
        printf("true\n");
    }
    printf("%d\n",b); // 조건에 따라 결과값이 다름 그래서 조건식에는 ++자제
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
