#include <iostream>
#include <vector>

// 클래스 템플릿 Arguemnt 2개 사용하기
// 여러개의 클래스 템플릿 Argument를 사용


template <typename T1, typename T2 > //문제
class Box {
public:
    void setValue(T1 key, T2 value) {
        keys.push_back(key);
        values.push_back(value);
    }

    T2 getValue(T1 key) {
        for (int i = 0; i < keys.size(); i++) {
            if (keys[i] == key) return values[i];
        }
        return 0;
    }

private:
    std::vector<T1> keys;
    std::vector<T2> values;
};

int template3() {
    Box<int, std::string> box;
    box.setValue(3, std::string("ABC"));
    box.setValue(10, std::string("HI"));
    box.setValue(15, std::string("KFC"));

    std::cout << box.getValue(10); // 출력 : HI
    std::cout << box.getValue(15); // 출력 : KFC

    return 0;
}
