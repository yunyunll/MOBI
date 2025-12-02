#include <iostream>

// int x = 0; // 불필요한 초기화 수행
// const int tt; //const 변수는 초기화할 수 없음
// int& tt = x; // reference 초기화 할 수 없음

// Member Initializer List
// C++ 공식 초기화 방법
// Person(int x) :tt{x}{


class constructor3_Person{
public:
    constructor3_Person() = default;

    
    constructor3_Person(int x) :tt{x}{
        // 생성할 때 초기 값을 대입하는 방법
        // this포인터를 사용하면 명시적 프로그래밍 가능
//        this->x = x; // this 현재 자신의 주소
        std::cout << tt << std::endl;
    }


private:
    const int tt = 99;
};


class constructor3_Node{
public:
    constructor3_Node() = default;
    
    constructor3_Node(int a):x{a},y{99}{
        std::cout << x << y << std::endl;
    }
    
    constructor3_Node(int a, int b):x{a},y{b}{
        std::cout << x << y << std::endl;
    }
        
    ~constructor3_Node() = default;
    
    int x = 5;
    int y = 6;
    
    void show() {
        std::cout << x << " " << y << std::endl;
    }

};



int constructor3() {
    
    constructor3_Person p{50};
    
    constructor3_Node a;
    a.show();
    constructor3_Node b{ 88 };
    constructor3_Node c{ 10, 20 };
    

    return 0;
}
