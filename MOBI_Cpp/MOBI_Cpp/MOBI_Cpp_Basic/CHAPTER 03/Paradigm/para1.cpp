#include <iostream>

// 어셈블리어 / C언어 Style 코딩 방법
// 어떤 순서대로 구현할지, 각 순서마다 어떻게 구현할지 고민한다
// 이를 절차지향 프로그래밍 패러다임이라고 한다

// 객체지향 프로그래밍 패러다임
// 1. 내 프로그램에 등장할 구성요소(객체)가 무엇인지 고민
// 2. 각 구성요소가 어떤 데이터를 갖고(속성 - Attribute), 어떤 행동을 할 수 있는지 결정(동작 - Operation)
// 3. 각 구성요소끼리 어떤 관계인지 고민
// 4. 객체들을 이용하여 순차적인 동작 흐름에 따라 코드를 작성

// 커피마시기 시뮬레이터
// 1. Person 등장
// 2. 커피 구매
// 3. 커피 드링크
// 4. 커피 재구매
// 5. 커피 드링크
// 6. 프로그램 끝

// 객체 생성하기
// 데이터 추가하기
// 행동 추가하기
// 객체들을 사용한 코드 작성

class paradigm_Coffee{                        // 객체 생성하기
public:
    int remainingAmount = 5;        // 데이터 추가하기
    void drink(){                   // 행동 추가하기
        remainingAmount -= 5;
        std::cout << "yummy" << std::endl;
    }
};

class paradigm_Person{                        // 객체 생성하기
public:
    std::string name = "Jennifer";   // 데이터 추가하기
    paradigm_Coffee *myCoffee;
    
    void buyCoffee(paradigm_Coffee* coffee){  // 행동 추가하기
        myCoffee = coffee;
    }
    
    void drinkCoffee(){              // 행동 추가하기
        myCoffee->drink();
    }
};


int paradigm() {
    
    
    // 객체들을 사용한 코드 작성
    paradigm_Person jf;
    paradigm_Coffee americano;
    
    jf.buyCoffee(&americano);
    jf.drinkCoffee();
    
    paradigm_Coffee latte;
    jf.buyCoffee(&latte);
    jf.drinkCoffee();
    
    
    
    

    return 0;
}
