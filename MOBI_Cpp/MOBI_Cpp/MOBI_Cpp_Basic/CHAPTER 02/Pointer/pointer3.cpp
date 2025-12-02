#include <iostream>
#include <vector>
#include <string>

// const reference로 코드 리팩토링

//void pointer_print(std::vector<int> arr){ // 값 복사가 이루어져 속도가 느리다
//void pointer_print(std::vector<int> &arr){ // Call by value -> Call by reference 성능증가
void pointer3_print(const std::vector<int> &arr){ // 읽기 전용 (함수 변경 불가)
    for(int num : arr){
        std::cout << num;
    }
}

// 기본 타입(int, double)에는 const refernece 를 쓸 필요 없음
// 객체 타입(string, struct, class) 에는 const reference 사용 권장
void pointer3_gogo(int x){ // 성능 저하가 없음 (const int &x) 필요X
    
}

int pointer3() {
    
    
    std::vector<int> arr = { 1, 5, 7, 10};
    pointer3_print(arr);
    
    
    int x = 10;
    pointer3_gogo(x);
    
    // 기본타입 const reference를 쓰더라도 성능이 좋아지지 않음
    for(int num : arr){
        std::cout << num << std::endl;
    }

    std::vector<std::string>strarr  = { "Hello", "Dfsa"};
    // 객체 타입 reference로 성능을 높이고 const를 추가하여 안정성을 높인다
    for(const auto &str : strarr){
        std::cout << str << std::endl;
    }
    
    
    

    return 0;
}
