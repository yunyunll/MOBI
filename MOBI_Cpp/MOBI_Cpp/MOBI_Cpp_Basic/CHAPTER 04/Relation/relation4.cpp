#include <iostream>
#include <string>

// Upcasting
// 자식클래스 객체를 부모클래스 타입으로 변경하는 것
// Upcasting을 이용하여 유지보수성이 더 좋은 코드를 만들 수 있는 기법 존재

// 사용하는 이유
// 유지보수성, 확장성을 위해서 Upcasting을 사용함

// virtual -> 멤버함수는 재정의를 허용하겠음
// x -> 부모클래스의 move()호출
// O -> 자식클래스의 move()호출 -> Overriding(재정의)
// 잘못된 Overriding을 하면 에러 그치만 가독성으 위함

class relation4_Robot {
public:
    virtual void move() { // virtual 자식 생성할지 부모 생성할지
        std::cout << "NORMAL MOVE";
    }
    void stop() {}

protected:
    int hp;
};

class relation4_SpeedRobot : public relation4_Robot {
public:
    void move() override{ // 재정의
        relation4_Robot::move(); // 확장하는 용도
        std::cout << "SPEED MOVE";
    }
    void run() {}

private:
    int modelID;
};

class relation4_PowerRobot : public relation4_Robot {
public:
    void attack() { // 재정의
        relation4_Robot::move(); // 확장하는 용도
        std::cout << "ATTACKT";
    }
};
// ====================================

//void moveRobot(std::string name){
//    if(name == "speed"){
//        SpeedRobot r;
//        r.move();
//    }
//    if(name == "power"){
//        PowerRobot p;
//        p.move();
//    }
//}
// ServerCode가 더 기능 추가되더라도
// Client Code에 변경이 없게끔 구현 가능 // UpCasting
void relation4_moveRobot(relation4_Robot *robot){
    robot -> move();
}

int relation4() {
    
    // 포인터로 Upcasting
    relation4_SpeedRobot speed;
    relation4_Robot* robot = &speed;
    robot->move();
    
    // Reference Upcasting
    relation4_SpeedRobot speed2;
    relation4_Robot& robot2 = speed2;
    speed2.move();
    
    relation4_moveRobot(&speed);


    return 0;
}
