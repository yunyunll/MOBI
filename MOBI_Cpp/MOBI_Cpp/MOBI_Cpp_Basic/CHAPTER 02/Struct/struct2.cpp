#include <iostream>
#include <vector>

class struct2_User {
public:
    // 데이터
    int HP;
    int MANA;

    // 동작
    void attack() {
        std::cout << "공격하세요\n";
    }
    void move() {
        std::cout << "움직이세요\n";
    }
    void talk() {
        std::cout << "이야기하세요\n";
    }
};

class struct2_Monster {
public:
    // 데이터
    int HP;

    // 동작
    void attack() {
        std::cout << "attck\n";
    }
    void die() {
        std::cout << "죽었습니다\n";
    }
};

class struct2_Npc {
public:
    // 데이터
    bool isTalk;

    // 동작
    void talk() {
            std::cout << "안녕하세요\n";
    }
};

int struct2() {
    
    struct2_User user1;
    struct2_Npc npc;

    struct2_Monster mon1;
    struct2_Monster mon2;
    struct2_Monster mon3;

    std::vector<struct2_Monster> monsters;
    monsters.push_back(mon1);
    monsters.push_back(mon2);
    monsters.push_back(mon3);

    user1.move();
    user1.talk();
    npc.talk();

    user1.move();
    user1.attack();

    for (auto mon : monsters) {
        mon.attack();
    }

    //출력 결과
    //attack
    //attack
    //attack

    return 0;
}
