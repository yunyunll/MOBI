#include <iostream>

// Const가 지원되는 객체 만들기
// 객체를 만들 때난 Const가 지원되도록 만들어야한다
// 만든 객체를 다른 함수에 전달하는 경우가 많기 때문

// 규칙
// 객체를 생성할 때 초기화가 완료
// 데이터 변경이 없는 멤버함수는 Const멤버함수로 만들기

class const2_Node{
public:
    const2_Node() = default;
    const2_Node(int initValue):value{ initValue }{}
    
    void setValue(int value){
        if(!preconditionCheck(value)) return;
        this->value = value;
    }
    
    int getValue() const { // const를 붙여야 사용가능
        gogo(); // const함수는 const함수만 호출 가능
        if(!preconditionCheck(value)) return 999;
        return value;
    }
    
    void gogo() const{
        
    }
private:
    int value = 0;
    
    bool preconditionCheck(int value) const{
        if (value >= 0) return true;
        return false;
    }
    
};


int const2() {
    
    // Const 객체는 초기화가 되어야한다
    // Const변수처럼, const 객체를 선언할 때 초기화 할 수 있어야한다
    // 따라서 const 객체는 생성자가 필요하다
    
    const int val1 = 100;
    const int val2{200};
    
    const const2_Node val3{300}; // -> 처음 세팅값 설정
    
//    val3.setValue(3); // const로 객체를 만들면 set 호출할 수 없음
    std::cout << val3.getValue(); // const로 객체를 만들면 get 호출할 수 없음
    




    return 0;
}
