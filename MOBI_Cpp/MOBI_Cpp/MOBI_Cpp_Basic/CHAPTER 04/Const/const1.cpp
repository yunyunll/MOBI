#include <iostream>

// const 변수 사용하기
// 변수 앞에 const를 붙이기면 읽기만 가능하며 값 변경은 불가능한 변수

// const 객체도 자주 사용
// 개발자에게 불변성을 강조하기 위해 함수 Parameter에 const를 사용

// const 객체 만들어보기
// const 객체를 완벽하게 지원해주는 Class를 만드는 것이 목표

// 내가 3년전에 만들어둔 함수
// X를 변경하면 버그가 남
//void func(const int x){
//    x = 340;
//}


class const1_Node{
public:
    int data;
    void func(){
    }
};

void const1_lib(const const1_Node &tt){ // 읽기 전용으로 사용한다
//    tt.data = 34;
//    tt.func(); // const가 지원이 안됨
}

int const1() {
    const int value = 100;
    
    std::cout << value;
    
//    Node t;
//    lib(t);


    return 0;
}
