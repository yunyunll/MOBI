// 원래는 new를 이용한 동적할당은 반드시 delete를 해야합니다.
// 실무에서는 new 대신 스마트포인터 사용을 권장합니다. (delete 자동 수행)
// 해당 코드는 스마트포인터를 사용했다고 가정하고, delete 처리를 생략하였습니다.

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

class User {
public:
    User(int age) : name{ "NO NAME" }, age{ age } {}
    User(string name, int age) : name{ name }, age{ age } {}

    string getName() {
        return name;
    }

private:
    string name;
    int age;
};

class Moter {
public:
    Moter(int initLifeTime) : lifeTime{ initLifeTime } {}

    void driveMoter() {
        lifeTime -= DecreseUnit;
    }

    int getLifeTime() {
        return lifeTime;
    }

private:
    static const int DecreseUnit = 1;
    int lifeTime;
};

class Car {
public:
    Car(User* user) : user{ user } {}

    void changeOwner(User* user) {
        this->user = user;
    }

    void addMoter(Moter *moter) {
        addedMoterCount += 1;
        moters.push_back(moter);
    }

    void driveCar() {
        for (auto moter : moters) {
            if (moter->getLifeTime() == 0) continue;
            moveDistance += 1;
            moter->driveMoter();
        }
    }

    string getReport() {
        string result;
        result += "[" + user->getName() + "'s Car]\n";
        result += "누적 이동거리 : " + std::to_string(moveDistance) + "\n";
        result += "추가한 모터 개수 : " + std::to_string(addedMoterCount) + "\n";
        result += "사용가능한 모터 개수 : " + std::to_string(0) + "\n\n";
        return result;
    }

private:
    User* user;
    vector<Moter*> moters;
    int addedMoterCount = 0;
    int moveDistance = 0;
};

int previous() {

    User inho{ "inho choi", 25 };
    User chayoon{ "chayoon choi", 20 };

    Car sportCar{ &inho };
    Car sedan{ &chayoon };

    sportCar.addMoter(new Moter{ 5 });
    sportCar.addMoter(new Moter{ 6 });
    sportCar.addMoter(new Moter{ 2 });
    sportCar.addMoter(new Moter{ 3 });

    sedan.addMoter(new Moter{ 10 });
    sedan.addMoter(new Moter{ 12 });

    for (int i = 0; i < 5; i++) {
        sportCar.driveCar();
        sedan.driveCar();
    }

    sportCar.changeOwner(&chayoon);

    std::cout << sportCar.getReport();
    std::cout << sedan.getReport();
    
    return 0;
}
