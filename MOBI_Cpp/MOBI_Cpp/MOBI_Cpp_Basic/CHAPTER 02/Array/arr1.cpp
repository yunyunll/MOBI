#include <iostream>
#include <vector>

// STL (standard Template Library) 공식 명칭은 아님

// C++ 동적배열 사용을 권장
// 성능과 메모리공간 절약 정적배열

// C-style Array 정적배열 성능이 가장 빠르지만 위험
// std::array 정적배열 안전
// std::vector 동적배열 고정된 사이즈 배열이 아닌 값 추가

// 항상 vector 우선적으로 사용
// 성능이 필요하면 C-Style Array


int arr1(){
    
    int arr1[] = {1,2,3,4,5};
//    arr1[6] = 3; // runtime error message가 안나옴
//
    
    std::vector<int> arr2 = {1,2,3,4,5};
//    arr2[16] = 3; // 범위를 벗어나면 runtime error message가 나옴
//    동적 배열의 장점 메모리 추가할당 메모리 축소 가능
    
    std::cout << arr2[0];
    
    for(int i = 0; i < arr2.size(); i++){
        std::cout << arr2[i];
    }
    
    return 0;
}
