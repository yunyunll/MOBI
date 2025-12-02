#include <iostream>

// Callable Object( Callable 객체)
// C++에서는 함수처럼 호출할 수 있는 객체를 다양하게 제공

// STL을 사용할 때 Functor가 사용되기 때문
// 함수를 객체로 취급하는 경우, 장점을 이해한다 - 특정 함수에게 동작방법을 전달
// 함수 객체의 동작 원리 이해가능 - State 개념 이해를 위함


// Satefull Callalbe Object
// Functor는 상태를 저장할 수 있다 - 일반함수와 달리
// Callalbe Object란 함수처럼 호출할 수 있는 객체

// Data
// 객체 내부에 저장되는 모든 값
// State / 임시데이터 / 로그데이터 등 객체에 저장되는 모든 값

// State
// 객체 내부에 저장되는 값들 중, 객체의 상태(state)를 표현하는 값
// 이 값으로 인해 함수의 동작이 변경

// 소스코드 동작 이해
// 3회까지는 재접속 시도 , 3회 이후부터는 장치 리셋 후 재접속을 시도
// tryCnt에 따라 동작이 달라질 수 있다 - static 변수 값에 따라 함수 동작이 달라짐

// Functor에서 state 사용하기
// 함수를 Functor로 만들면 아래와 같은 방법으로 State를 표현할 수 있다
// State : 객체의 상태를 표현한 값으로 이 값으로 인해 함수 동작이 달라지는 값




//void reconncet() {
//    static int tryCnt = 0;
//    tryCnt++;
//
//    if(tryCnt > 3){
//        // 장치 리셋
//    }
//    // 재접속 시도 코드
//}

class Reconncet {
public:
    void operator()(){
        if(tryCnt > 3){
            // 장치 리셋
        }
        
        // 재접속 시도 코드
    }
private:
    int tryCnt = 0;
};
//tryCnt 증가 코드가 없음
//→ 매번 0이기 때문에 tryCnt > 3 조건은 절대 실행되지 않음.
//
//클래스 이름 오타일 가능성 (Reconnect?)
//
//재접속 실패했을 때만 tryCnt++가 필요함
//(성공 시 초기화할 필요도 있음)


int functor2() {


    return 0;
}
