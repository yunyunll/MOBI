#include "bas_linkage.h" // 호출부와 구현부를 연결하는 건 링커가 함
// external linkage 헤더에 들어가면 안됨
// internal linkage 헤더에 들어가야함

int basic3(void) {
    
    goo();
    cnt = 10;
    int n = MAX;

    return 0; // 자동으로 0을 반환
}

