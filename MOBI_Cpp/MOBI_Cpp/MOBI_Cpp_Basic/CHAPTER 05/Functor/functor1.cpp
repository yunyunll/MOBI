#include <iostream>

// Functor
// 함수객체
// 함수처럼 동작 가능한 객체
// () 연산자 오버로딩으로 구현

// 함수도 객체로 취급하기
// 함수는 동작되는 방법을 타나낸다
// 함수도 객체로 취급이 가능할 때 다음과 같은 프로그래미이 가능하다.

// Functor로 다형성 구현
// Functor는 Class로 구현하는 것이기에 Interface로도 활용 가능하다
// 함수를 객체로 취급할 때 동작 방법을 다른 함수에 넘길 수 있다.

using std::cout;
using std::vector;

class functor1_SortAlgorithm {
public:
    virtual void operator()() = 0;
};

class functor1_Quick : public functor1_SortAlgorithm {
public:
    void operator()() {
        cout << "퀵";
    }
};

class functor1_Bubble : public functor1_SortAlgorithm {
public:
    void operator()() {
        cout << "버블";
    }
};

void functor1_sort(const vector<int>& arr, functor1_SortAlgorithm &algorithm) {
    //algorithm 대로 arr를 정렬한다.
    algorithm();
}

int functor1() {
    vector<int> arr = { 9, 2, 5 };
    functor1_Quick quick;

    functor1_sort(arr,quick); //문제

    return 0;
}
