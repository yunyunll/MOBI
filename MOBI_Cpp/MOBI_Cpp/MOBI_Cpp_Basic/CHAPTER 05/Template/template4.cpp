#include <iostream>
#include <vector>

// Template
// 범용적 타입을 지원하는 함수 및 클래스를 ㅏㅈㄱ성하기 위한 문법
// Library 제작시 다양한 타입을 지원해야 개발자들이 사용하기 좋다

// 장점 - Complie Time에 정확한 타입의 코드가 생성
// 단점 - Compile 시간 증가, 복잡한 에러메세지로 디버깅 힘들다

// 클래스 템플릿 Arguemnt 2개 사용하기
// 여러개의 클래스 템플릿 Argument를 사용

// const reference와 const 멤버 함수를 사용함

template <typename T1 , typename T2>
class Node {
public:
    // 기본 생성자는 생성자가 없어야만 컴파일러가 자동으로 만들어주지만 없어도 된다.
    Node(T1 v1, T2 v2) : value1 {v1}, value2{v2}{}
    
    T1 getValue1() const{
        return value1;
    }
    T2 getValue2() const{
        return value2;
    }
    
private:
    T1 value1 = 0;
    T2 value2 = 0;
};
    
int template4() {

    Node<double,int> node{10.5 , 10 };
    
    
    
    return 0;
}
