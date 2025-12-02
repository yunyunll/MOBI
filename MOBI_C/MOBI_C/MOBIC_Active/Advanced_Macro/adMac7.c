#include <stdio.h>

#define MSG "Hello "
#define MAX 1000
#define DEBUG

int adMac7(void) {
    
    
    printf("%s\n",MSG);
    printf("%d\n",MAX);

    printf("%s\n",__FILE__); // 파일의 이름
    printf("%d\n",__LINE__); // 줄 번호
    printf("%s\n",__TIME__); // 현재 시간
    printf("%s\n",__DATE__); // 날짜
    printf("%s\n",__func__); // 함수의 이름
    printf("%d\n",__STDC__); // 컴파일러가 C표준을 지원하면 1
    printf("%d\n",__STDC_VERSION__); // 컴파일러가 사용하는 C언어 버전

    return 0;
    
}
