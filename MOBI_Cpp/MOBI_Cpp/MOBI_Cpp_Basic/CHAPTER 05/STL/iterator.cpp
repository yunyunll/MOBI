#include <iostream>
#include <set>
#include <map>

// iterator란?
// 원소에 접근, 순회하는 공통된 방법을 제공
// 포인터처럼 사용할 수 있도록 만들어진 객체
// Container를 순회할 때 iterator를 사용
// Algorithm를 사용할 때 Container와 iterator를 사용




int iterator() {

    // 포인터처럼 사용가능
    std::vector<int> arr1 = { 1, 2, 3, 5, 9 ,10};
    
    std::vector<int>::iterator it = arr1.begin();
    std::cout << *it << std::endl; // 첫번째 원소 출력
    
    ++it;
    std::cout << *it << std::endl;  // 두번째 원소 출력
    
//    둘 다 사용되지만 range-based for가 더 선호
//    가독성이 좋긴 때문
//    만약 element 값을 변경하거나 삭제가 필요할 때는 iterator 순회
    
    // iterator 순회
    for(auto i = arr1.begin(); i != arr1.end(); ++i){
        std::cout << *i << " ";
    }
    
    // range-based for
    for(int num : arr1){
        std::cout << num << " ";
    }
    
    
    return 0;
}
