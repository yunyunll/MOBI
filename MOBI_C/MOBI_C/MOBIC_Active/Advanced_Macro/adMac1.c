#include <stdio.h>

#define MAX 256 // 매크로 상수
#define SQUARE(n) ((n) * (n)) // 매크로 함수 ( 속도가 빠름) // 모든 타입에 동작
int square1(int n){return n * n;} // 일반 함수

int adMac1(void) {
    
    char name[MAX];
    
    int a = 3;
    int n1 = square1(++a); // 4 * 4
    int n2 = SQUARE(++a); // (++a)*(++a) = 4 * 5
    
    // int n1 = square(a + 1); // (a + 1) * (a + 1)
    // int n2 = SQUARE(a +. 1); // a + s1 * a + 1
    
    printf("%d %d \n",n1,n2);

    return 0; // 자동으로 0을 반환
    
}
