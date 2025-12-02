#include <iostream>
#include <string>
#include <vector>

// has-a관계
// 파라미터로 객체의 참조를 전달하는 받는 것을 Dependency Injection(참조주입)
// D.I로 받은 객체를 내부 객체로 저장할 때 has-a 관계
// 다양한 객체를 보유할 수 있음

// 생성 주입(Constructor Injection)
// 생성자에서 D.I하는 것

// Composition 관계
// 생명주기를 함께 하는 관계

class relation2_Coffee {
public:
    void drink() {
        std::cout << "GOOD ";
    }
};

class relation2_Person {
public:
    void buyCoffee(relation2_Coffee* c) { // 참조 주입
        cos.push_back(c);
    }

    void drinkCoffee() {
        for (auto c : cos) {
            c->drink();
        }
    }

private:
    std::vector<relation2_Coffee*> cos;
//    Coffee* coffee; // 포인터를 이용한 생성자 주입
//    Coffee& coffee; // 참조를 이용한 생성자 주입
//    Coffee myCoffee; // Composition관계
    
};

int relation2() {
    relation2_Person per;
    per.buyCoffee(new relation2_Coffee());
    per.buyCoffee(new relation2_Coffee());
    per.buyCoffee(new relation2_Coffee());

    //출력 : GOOD GOOD GOOD
    per.drinkCoffee();

    return 0;
}


