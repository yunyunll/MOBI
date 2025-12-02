#include <iostream>

// 객체에 연산자 사용하기
// 데이터와 맴버함수를 담고있는 개체들에게 연산자를 사용하였을 때, 컴파일러가 연산자의 동작을
// 해석할 수 없어 컴파일 에러가 발생

// 연산자 오버로딩
// 주로 Library를 설계할 때 사용
// 사용빈도가 높고 직관적으로 의미 전달이 가능할때만 제한적으로 사용한다.

class Node {
public:
    Node() = default;
    Node(int a, int b) : a{ a }, b{ b } {}

    void show() const {
        std::cout << a << "," << b << "\n";
    }
    
    // 컴파일러 해석 : c = t.operator+(v)
    Node operator+(const Node& other) const{
//        this->a,b // 이건 Node t{10,20};
//        other.a,b // 이건 Node v{ 10, 50 };
        return { this -> a + other.a, this -> b + other.b};
    }
    
    // 컴파일러 해석 : c = t.operator-(v)
    Node operator-(const Node& other) const{
//        this->a,b // 이건 Node t{10,20};
//        other.a,b // 이건 Node v{ 10, 50 };
        return { this -> a - other.a, this -> b - other.b};
    }
    
    // 컴파일러 해석 : if (t.operator==(v))
    bool operator==(const Node & other) {
        std::cout << "비교합니다... : ";
//      return (this->a == other.a && this->b == other.b);
        if (this->a != other.a) return false;
        if (this->b != other.b) return false;
        return true;
    }
    
    // 컴파일러 해석 : e.operator()(100);
    void operator()(int num) {
        this -> a = num;
        this -> b = num;
    }
    
    

private:
    int a, b;
};

int template5() {
    Node t{ 10, 20 };
    Node v{ 10, 50 };
    
    t.show();
    v.show();
    
    // '+' 연산자 오버로딩
    // '+'을 사용했을 때 operator + 라는 이름의 함수가 호출됨
    // 컴파일러는 t.operator+(v)로 해석
    Node c;
    c = t + v; // 컴파일러 해석 : c = t.operator+(v)
    c.show();
    
    Node d;
    d = t - v; // 컴파일러 해석 : c = t.operator-(v)
    d.show();

    if (t == v) {
        // 컴파일러 해석 : if (t.operator==(v))
        std::cout << "같다";
    }
    else {
        std::cout << "다르다";
    }
    
    Node e;
    e(100); // 컴파일러 해석 : e.operator()(100);
    
    
    
    
    
    
    
    // 이것도 연산자 오버로딩
    std::string str1 = "ABC";
    std::string str2 = "DEF";
    std::string out = str1 + str2;

    return 0;
}
