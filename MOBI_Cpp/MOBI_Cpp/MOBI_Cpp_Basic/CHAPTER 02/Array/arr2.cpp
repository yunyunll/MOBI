#include <iostream>
#include <vector>

// vector : C++ 표준 Container 중 하나
// element : Container에 저장된 값의 단위
// <int> : template 문법, element의 타입
// push_back() : container 맨 뒤에 값 추가, size()가 늘어남
// pop_back() : container 맨 뒤에 값 제거, size()가 줄어듬
//  at : arr[i] 보다 안전하게 element 접근 가능
// vector<bool> 비추천 : 성능이 느리고 safe 하지 않음

// 자주 사용되는 함수
// std::vector<int> arr(a) a칸만큼 0
// resize(a) : a칸으로 변경
// front() , back();
// push_back(), pop_back(), clear()

void abc(std::vector<int> arr){ // 배열을 argument로 전달
    arr[0] = 99; // main내의 arr는 변화가 없음
}


int arr2(){
    
    std::vector<int> arr = { 1, 2, 3, 4, 5};
    std::vector<int> arr1(5,99); // 99로 9칸
    arr.resize(10);

    std::cout << arr[0]; // 조금 더 빠름 runtime 에러
    std::cout << arr.at(0); // 조금 더 안전 Exception 발생
    
    std::vector<int> arr2;
    arr.resize(10);
    
    std::cout << arr1.front() << arr1. back();
    
    arr.clear();
    
    arr1.push_back(99);
    arr1.pop_back();
    
    
    for(int i = 0; i < arr1.size(); i++){
        std::cout << arr1[i];
    }
    

    return 0;
}

