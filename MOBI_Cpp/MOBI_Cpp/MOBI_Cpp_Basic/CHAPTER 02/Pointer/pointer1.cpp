#include <iostream>
#include <vector>

// new      : malloc/free 대신 new/delete로 동적할당
// delete   : Header File을 include 할 필요가 없으며 캐스팅도 없어도 됨

// 동적할당을 하는 이유: 대표적으로 메모리 낭비를 방지할 수 있다.
// Runtime 도중 User에 따라 메모리 사용량이 달라질 수 있는데 동적할당으로 User 맞춤형 메모리 사용

class pointer1_Car{
public:
    int x;
    void run(){
        std::cout << "HI";
    }
};

// Modern C++에서는 자동으로 delete해주는 Smart Pointer 문법 권장

// b = -1일 때 Memory Leak 발생
void pointer1_run1(int* p, int b){
    p = new int(5);
    if( b == -1){
        std::cout<<" 잘못된 argument ";
        return;
    }
    delete p;
}

// 자동으로 deltet되는 Smart Pointer 문법 (Modern C++)
void pointer1_run2(int* p1, int b){
    auto p = std::make_unique<int>(5);
    if( b == -1){
        std::cout<<" 잘못된 argument ";
        return;
    }
}


int pointer1() {
    
    
    pointer1_Car t1;
    pointer1_Car* p = new pointer1_Car(); // 동적할당
    
// new 이후 delete를 하지 않으면 Memory Leak 발생
// 메모리 누수가 쌓이면 Runtime 에러 가능
    delete p;
    
    
    // sudo 코드
    // 100MB 1member / 1MB 99member -> 1member를 위해 100MB로 할당X
//    int userIP = getID();
//    if(userID == 77){
//        Car* p = new Car(100MB); // 동적할당
//    }
//    else{
//        Car* p = new Car(1MB); // 동적할당
//    }
    
    

    return 0;
}
