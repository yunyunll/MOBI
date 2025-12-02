#include <iostream>
#include <vector>

// 접근(Access)    : 하나의 element를 읽고, 쓰는 것
// 탐색(Search)    : 보유한 element들 중에서 원하는 값을 찾는 것
// 순회(Iteration) : 보유한 모든 element를 처음부터 끝까지 살펴 보는 것

// iterator
// 모든 Container들이 element를 접근, 순회하는 공통적인 방법을 위함


int iter1(){
    
    std::vector<int> arr = {1, 2, 3, 5, 6, 10, 20};
    
    arr[0]; // 접근
    
    //순회하는 방법 1
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl ;
    
    //순회하는 방법 2 : iterator
    // for(std::vector<int>::iterator it = arr.begin();
    for(auto it = arr.begin(); it!= arr.end(); ++it){ // Container들의 일관된 순회 방법
        std::cout << *it << " ";
    }
    std::cout << std::endl ;
    
    //순회하는 방법 3 : ranged-base for loop 가장 많이 쓰는 방법
    for(int num : arr){
        std::cout << num << " " ;
    }

    std::cout << std::endl ;
    
    
    // arr.begin()  : 첫번째 element
    // arr.end()    : 마지막 element 그 다음
    
    auto i1 = arr.begin();
    auto i2 = arr.end();
    --i2; // i2-- 보다 성능이 빠름
    
    std::cout << *i1 << " " << *i2 << std::endl ;
    
    // arr.rbegin()  : reverse begin
    // arr.rend()    : reverse end
    
    for(auto it = arr.rbegin(); it!= arr.rend(); ++it){ // Container들의 일관된 순회 방법
        std::cout << *it << " ";
    }
    std::cout << std::endl ;


    
    


    return 0;
}


