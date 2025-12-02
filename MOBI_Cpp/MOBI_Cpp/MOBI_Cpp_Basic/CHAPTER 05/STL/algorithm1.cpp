#include <iostream>
#include <vector>
#include <algorithm>

// 직접 구현하는 것 보다 알고리즘 사용하는 것을 권장
// 안정성 가독성을 위해

// 원본을 변경하지 않는 배열

bool algorithm1_isOver10(int i){
    return i > 10;
}


int algorithm1() {

    // 포인터처럼 사용가능
    std::vector<int> arr = { 1, 3, 5, 7, 9 ,10, 13};
    
    
    // std::min_element(first,last) / max_element(first,last)
    // 범위 내 가장 작은 값 / 큰 값을 리턴
    auto t1 = std::min_element(arr.begin(), arr.end());
    auto t2 = std::max_element(arr.begin(), arr.end());
    
    std::cout << *t1 << std::endl;
    std::cout << *t2 << std::endl;
    
    // std::find(first,last,value)
    // first에서 last이전 범위에서 value를 찾아 iterator 반환
    auto t3 = std::find(arr.begin(), arr.end(),3);
    
    if( t3 != arr.end()){ // 없는 경우 end()를 반환
        std::cout << *t3 << std::endl;
    }
    
    // std::find_if(first,last,predicate)
    // predicate : 컴퓨터 사이언스에서 true/false를 반환하는 조건함수
    // first에서 last이전 범위에서 value를 찾아 iterator 반환
    auto t4 = std::find_if(arr.begin(), arr.end(),algorithm1_isOver10);
    
    if( t4 != arr.end()){ // 없는 경우 end()를 반환
        std::cout << *t4 << std::endl;
    }
    
    // std::lower_bound(first,last,predicate)
    // value 이상의 값의 범위(bound)중, 가장 첫번째 값 반환(lower)
    // 정렬된 상태에서만 사용가능
    
    // 8이상의 범위에서 첫번째 값 찾기
    // 8이상의 값이 없으면 end()값
    auto t5 = std::lower_bound(arr.begin(), arr.end(),8);
    
    if( t5 != arr.end()){ // 없는 경우 end()를 반환
        std::cout << *t5 << std::endl;
    }
    
    
    
    return 0;
}
