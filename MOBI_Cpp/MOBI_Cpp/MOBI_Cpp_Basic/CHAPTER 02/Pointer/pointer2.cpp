#include <iostream>
#include <vector>

// reference : 별명
// y는 x의 reference
//int x = 100;
//int& y = x;

// reference 생성방법
// Type&별칭 : 레퍼런스 생성시 누구의 reference인지 반드시 지정
// 한번 Binding 후, 다른 변수로 Binding 불가

// reference 사용하는 이유
// 복잡한 포인터 대신 간결하게 포인터 효과를 낼 수 있음
//int down(int* p){
//    return *p = *p + 10;
//}

//down(&x);
//
//int down(int &p){
//    return p = p + 10;
//}
//
//down(x);


// 파라미터로 읽기 전용 가끔 사용
void pointer1_go(const int& xx){
//    xx  =20; // 변경 불가
}



int pointer() {
    
    int x = 10;
    int& alias = x;
    pointer1_go(x);
    
    // const reference
    // const reference로 binding 시, 참조하고 있는 값을 변경할 수 없ㄷ
    // 읽기 전용으로 변수를 사용하겠다는 의미
    const int& tt = x;
    
    pointer1_go(x);

    // 상수 별칭에는 const를 붙인다
    const int& a = 100;
    const std::string& b = "ABCDEF";


    return 0;
}
