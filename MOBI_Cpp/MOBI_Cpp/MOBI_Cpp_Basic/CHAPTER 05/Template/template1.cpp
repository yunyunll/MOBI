#include <iostream>

// 함수템플릿
// 함수템플릿을 이용하여 범용적인 타입을 지원하는(일반화된) 함수 제작 가능

// Class Template
// 클래스 템플릿을 이용하여 범용적인 타입이 지원되는 객체를 만들 수 있음


//템플릿은 다양한 type을 지원하는 함수나 클래스를 만들때 사용합니다.
//다음 코드를 이해하고, 빈칸에 알맞은 코드를 채워주세요.


template <typename KFC> //문제
KFC getSum(KFC a, KFC b) {
    return a + b;
}

int template1() {
    std::cout << getSum(10, 20) << '\n';
    std::cout << getSum(5.6, 2.3) << '\n';

    return 0;
}
