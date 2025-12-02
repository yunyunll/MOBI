#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric> // accumulate

// 원본을 변경하는 배열
// 원본을 변경하지 않는 것을 불변성
// 기본적으로 불변성을 가진 알고리즘을 쓰는 것이 권장
// 원본을 변경하는 알고리즘을 쓸 때는 값을 복제 후 사용하는 것을 권장

std::vector<int> algorithm3_printVector(const std::vector<int> &arr){
    std::vector<int> result = arr;
    
    std::reverse(result.begin(), result.end());
    
    return result;
}


int algorithm3() {

    std::vector<int> arr = { 1, 3, 5, 7, 9 ,10, 13};
    std::string str = "AAFAFAAFA";
    
    // 권장되는 방법
    std::vector<int> reversedArr = algorithm3_printVector(arr);
    
    for(int num : reversedArr){
        std::cout << num << " ";
    }
    
    std::cout  << "\n";
    
    // std::reverse(first,last)
    // 배열 전체 뒤집기
    std::reverse(arr.begin(), arr.end());
    for(int num : arr){
        std::cout << num << " ";
    }
    
    std::cout  << "\n";
    
    // std::sort(first,last,predicate)
    // predicate 생략시 : 범위에서 오름차순으로 sort하기
    // predicate 지정시 : 범위에서 predicate 기준으로 sort하기
    std::sort(arr.begin(), arr.end());
    for(int num : arr){
        std::cout << num << " ";
    }
    
    std::cout  << "\n";
    
    std::sort(arr.begin(), arr.end(),std::greater<>());
    for(int num : arr){
        std::cout << num << " ";
    }
    
    std::cout  << "\n";
    
    std::vector<int> arr1(6);
    
    // std::fil(first,end,value)
    // 범위 전체에 value 값으로 채우기
    std::fill(arr1.begin(), arr1.end(), 34);
    for(int num : arr1){
        std::cout << num << " ";
    }
 
    std::cout  << "\n";
    
    // std::remove(first,end,value)
    // 범위 내에서 value 값을 제거함
    // value의 뒷칸을 앞칸으로 덮어쓰는 방식으로 동작하며 쓰레기값이 뒤에 남아있음
    // 컨테이너의 멤버함수인 erase()까지 함께 사용하여, 쓰레기값 제거
    auto last = std::remove(arr.begin(), arr.end(), 5);
    
    // 5를 찾지 못하면 last는 arr.end()값이 됨
    
    if(last != arr.end()){
        arr.erase(last,arr.end());
    }
    // arr.erase(std::remove(arr.begin(), arr.end(), 5),arr.end());
    
    for(int num : arr){
        std::cout << num << " ";
    }
 
    std::cout  << "\n";
    
    // std::remove_if(first,end,predicate)
    // 범위 내에서 조건에 맞는 value 값을 제거함
    
    // copy_if로도 조건부 삭제 기능 구현 가능하지만 차이점은 다음과 같다
    // remove_if : 원본 컨테이너에서 요소 삭제
    // copy_if : 원본을 그대로 두고 값이 삭제된 다른 컨테이너 생성 ---> 권장
    // arr.erase(std::remove_if(arr.begin(), arr.end(), 조건),arr.end());
  


    
    
    return 0;
}
