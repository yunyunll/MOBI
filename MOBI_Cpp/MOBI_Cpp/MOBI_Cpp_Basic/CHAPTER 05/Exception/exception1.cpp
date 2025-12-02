#include <iostream>
#include <stdexcept>

// Exception(예외)이란
// 정상적이지 않은 동작이 감지되었을 때 일반적인 코드 흐름을 벗어나 별도의 처리하게끔 하는 메커니즘
// 꼭 예상치 못한 동작일때가 아니라 예상하고 있는 비정상 동작에 대해 예외처리를 하곤 한다

// Return 값을 이용한 Error Handling 코드 단점 - 가독성이 낮다
// If문의 목적이 로직을 위한 코드인지 아니면 Error Handling 코드인지 내부 코드를 살펴보아야 파악

int exception1_divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("0으로 나눌 수 없음"); // 기존보다 더 명시적
    }
    return a / b;
}

int exception1_run() {
    int ret = exception1_divide(5, 0);
    // 불필요한 코드 삭제
    // if(ret == -1) return -1;
    return 0;
}

int exception1() {
    try { // try블록 안에서만 Exception 감지가능
        int ret = exception1_run();
        //...
    }
    catch (const std::exception &e) { // try에서 Exception감지 즉시 호출
        std::cout << e.what() << '\n';
        return 0;
    }

    return 0;
}

