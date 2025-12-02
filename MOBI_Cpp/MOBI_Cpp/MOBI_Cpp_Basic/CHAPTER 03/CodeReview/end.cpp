// 원래는 new를 이용한 동적할당은 반드시 delete를 해야합니다.
// 실무에서는 new 대신 스마트포인터 사용을 권장합니다. (delete 자동 수행)
// 해당 코드는 스마트포인터를 사용했다고 가정하고, delete 처리를 생략하였습니다.

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

// Data : 이름, 나이
// 사람 이름과 나이를 취급하는 단순 데이터 객체
// 2개의 생성자를 가지고 있다
class User {
public:
    User(int age) : name{ "NO NAME" }, age{ age } {}
    User(string name, int age) : name{ name }, age{ age } {}

    string getName() { // getter : 데이터 읽기
        return name;
    }

private:
    string name;
    int age;
};

// Data : 수명
// Function : driveMoter()
// 모터를 사용할수록 수명이 깎인다
// 생성자에서 수명 값을 초기화한다
class Moter {
public:
    Moter(int initLifeTime) : lifeTime{ initLifeTime } {}

    void driveMoter() {
        useBattery();
        lifeTime -= DecreseUnit;
    }

    int getLifeTime() {
        return lifeTime;
    }
    
    void chargeBattery(){
        remainingBattery = 100;
    }
    
    int getBatteryAmount() {
        return remainingBattery;
    }

private:
    static const int DecreseUnit = 1;
    int lifeTime;
    int remainingBattery = 0;
    
    void useBattery(){
        if(lifeTime >= 10 ) remainingBattery -= 1;
        else if(lifeTime >= 5 ) remainingBattery -= 2;
        else if(lifeTime >= 1 ) remainingBattery -= 3;
        
        if(remainingBattery < 0 ) remainingBattery = 0;
    }
};

// Data : 총 모터수, 이동거리
// Function : changeOwner() , addMoter(), driveCar()
// 소유주 변경 및 모터 추가 기능, 사용가능한 모터를 이용하여 운행
// 사용한 모터만큼 이동거리가 계산된다
// 차량의 상태를 Report하는 기능 제공
class Car {
public:
    Car(User* user) : user{ user } {}

    void changeOwner(User* user) {
        this->user = user;
    }

    void addMoter(Moter* moter) {
        addedMoterCount += 1;
        moters.push_back(moter);
    }

    void driveCar() {
        for (auto moter : moters) {
            if(moter->getBatteryAmount() == 0) continue;
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
        result += "모터의 평균 배터리량 : " + std::to_string(avgBatteryAmount()) + "\n";
        result += "사용가능한 모터 개수  : " + std::to_string(availableMoterCount()) + "\n\n";
        return result;
    }

    vector<Moter*> getMoters(){
        return moters;
    }
    
private:
    User* user;
    vector<Moter*> moters;
    int addedMoterCount = 0;
    int moveDistance = 0;
    
    int avgBatteryAmount(){
        int avg = 0;
        for(auto moter : moters){
            avg += moter->getBatteryAmount();
        }
        return avg / moters.size();
    }
    
    int availableMoterCount(){
        int result = 0;
        for(auto moter : moters){
            if(moter->getBatteryAmount() == 0 ) continue;
            if(moter->getLifeTime() == 0 ) continue;
            result++;
        }
        return result;
    }
};

class Charger {
public:
    void rechargeCar(Car* car){
        for (auto moter : car->getMoters()) {
            moter->chargeBattery();
        }
    }
};





int end() {

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

    Charger charger;
    charger.rechargeCar(&sportCar);
    charger.rechargeCar(&sedan);

    std::cout << sportCar.getReport();
    std::cout << sedan.getReport();

    for (int i = 0; i < 5; i++) {
        sportCar.driveCar();
        sedan.driveCar();
    }

    std::cout << sportCar.getReport();
    std::cout << sedan.getReport();
    
    return 0;
}
