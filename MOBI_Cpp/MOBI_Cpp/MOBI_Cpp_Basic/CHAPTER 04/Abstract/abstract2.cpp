#include <iostream>

// Abstract class 구현
// 1. 소스코드의 개선점 도출
// 새로운 TV가 추가될 때,Client 코드도 유지보수 되어야한다

// 2. Interface 도입
// Abstract를 이용하여 Interface 도입

// 3. Interface 구현체 - SamsungTV
// 기존 Server코드를 Abstract class상속받은 코드로 변경

// 4. Interface 구현체 - SonyTV
// 기존 Server코드를 Abstract class상속받은 코드로 변경

// 5. Clinet 코드 변경하기
// Interface를 사용하면 TV제조사별 함수를 만들지 않고 통합된 멤버함수 생성

class abstract2_RemoteControl {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class abstract2_SamsungTV : public abstract2_RemoteControl{
public:
    void turnOn() override{
        std::cout << "[삼성] TV 부팅 중...\n";
    }

    void turnOff() override{
        std::cout << "[삼성] TV 종료 중...\n\n";
    }
};

class abstract2_SonyTV : public abstract2_RemoteControl{
public:
    void turnOn() override{
        ready();
        start();
    }

    void turnOff() override{
        ready();
        finish();
    }
    
private:
    void ready() {
        std::cout << "{Sony} Sync...\n";
    }

    void start() {
        std::cout << "{Sony} Start!\n";
    }

    void finish() {
        std::cout << "{Sony} Bye!\n\n";
    }
};

class abstract2_Client {
public:
    void watchTV(abstract2_RemoteControl *tv) {
        tv->turnOn();
        std::cout << "무한~도전\n";
        tv->turnOff();
    }
};

int abstract2() {
    
    abstract2_Client client;
    
    abstract2_SamsungTV samsung;
    client.watchTV(&samsung);
    
    abstract2_SonyTV sony;
    client.watchTV(&sony);

    return 0;
}
