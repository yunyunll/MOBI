#include <iostream>

// Server Code
// 요청을 받아서 동작되는 코드
// Library도 Server Code의 예시
//
// Client Code
// Server Code를 사용하는 코드

// private 접근제어자 설정
// private을 활용하여 공개하지 않을 데이터를 지정
// private을 활용하여 내부에서만 사용되는 멤버함수도 만들 수 있다

// B부서
class private1_GameMachine {
public:
    void insertCoin() {
        coin += 1;
    }

    void playGame() {
        if (hasCoin() == false) {
            std::cout << "코인을 넣어주세요\n";
            return;
        }
        coin -= 1;
    }

private:
    bool hasCoin() {
        return coin > 0;
    }

    int coin = 0;
};

// A부서 Client code
int private1() {
    private1_GameMachine gm;
//    gm.coin = 9999;
    // B부서가 잘못 만든 것
    // public은 클래스 외부에서 호출해도 된다는 의미, coin은 외부에서 건드리면 안되는 데이터
    // EX) 돈을 바깥에 두면(public설정) 은행의 돈 관리
    gm.insertCoin();
    gm.insertCoin();
    gm.playGame();

    return 0;
}


