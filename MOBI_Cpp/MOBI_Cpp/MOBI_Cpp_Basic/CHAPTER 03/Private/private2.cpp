#include <iostream>

// 데이터의 접근 권한 권리
// 읽기 전용 데이터
// 데이터 값을 읽는 멤버함수를 Getter
// Getter만 제공하는 경우, Client Code에게 읽기만 허용

// 쓰기 전용 데이터
// 데이터 값을 변경하는 멤버함수를 Setter
// Getter없이 Setter만 제공하는 경우, 쓰기 전용 데이터
// 방어적 프로그래밍 가능

// 읽기 / 쓰기 전용 데이터

// B부서
class private2_GameMachine {
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
    
    int getCoinAmount(){
        return coin;
    }
    
    // 읽고 쓰기 가능
    void setCoin(int n){
        if( n <= 0){
            std::cout << "1 이상인 수를 넣어야합니다.\n";
        }
        coin = n;
    }

private:
    bool hasCoin() {
        return coin > 0;
    }
    // 읽기 전용 데이터
    int coin = 0;
};

// A부서 Client code
int private2() {
    private2_GameMachine gm;
//    gm.coin = 9999;
    // B부서가 잘못 만든 것
    // public은 클래스 외부에서 호출해도 된다는 의미, coin은 외부에서 건드리면 안되는 데이터
    // EX) 돈을 바깥에 두면(public설정) 은행의 돈 관리
    gm.insertCoin();
    gm.insertCoin();
    gm.playGame();

    return 0;
}


