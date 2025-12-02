#include <iostream>
#include <string>
#include <vector>

// use-a관계
// 객체를 가지고 있지 않고, 일시적으로 다른 객체를 사용만 하는 관계
// usa-a 관계는 외부 객체를 임시적으로 사용하는 관계

// 클래스가 참조를 저장하지 않는다
// Local : 지역 객체 사용하기

//void drinkCoffee(){
//    Coffee c;
//    c.drink();
//}

// Parameter : 파라미터 사용 (지역 개체와 동일)

// void drinkCoffee(coffee top){
//    top.drink();
//}

// Factory : 객체 생성 수 반환

//Coffee* makeCoffee(){
//    return new Coffee();
//}


class relation1_Coffee {
public:
    void drink() {
        std::cout << "GOOD TASTE";
    }
};

class relation1_Person {
public:
    
    void drinkCoffee(){
        relation1_Coffee c;
        c.drink();
    }
};

int relation1() {
    
    relation1_Person p;
    p.drinkCoffee();
    

    return 0;
}
