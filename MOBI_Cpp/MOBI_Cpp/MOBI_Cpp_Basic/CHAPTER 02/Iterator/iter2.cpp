#include <iostream>
#include <vector>

//C-style for 문 - for 문에 반복자 i는 순회하기 위한 재료
//범위 기반 for 문 - 각 원소를 복사하여 사용 주로 int타입

// C-style for문 - for(int i = 0; i < v.size(); i++)
// for + iterator - for(auto it = v.begin; i < v.end(); ++i)
// range-based for loop - for(auto x:v)

int iter2(){
    
    std::vector<int> arr = {1, 2, 3, 5, 6, 10, 20};
    
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " " ;
    }

    std::cout << std::endl;
    
    // 간결하기에 우선순위가 높음 - 대부분의 컨테이너 순회 가능
    for(int num : arr){
        std::cout << num << " " ;
    }
    
    std::cout << std::endl;
    
    // arr 문에서도 가능
    int brr[] = {1, 2, 3, 5, 6, 10, 20};
    
    for(int num : brr){
        std::cout << num << " " ;
    }
    
//    // list 문에서도 가능
//    std::list<int> arr3 = {1, 2, 3, 5, 6, 10, 20};
//
//    for(int num : arr3){
//        std::cout << num << " " ;
//    }
//
//    // deque 문에서도 가능
//    std::deque<int> arr4 = {1, 2, 3, 5, 6, 10, 20};
//
//    for(int num : arr4){
//        std::cout << num << " " ;
//    }
    
//    // set 문에서도 가능
//    std::set<int> arr5 = {1, 2, 3, 5, 6, 10, 20};
//
//    for(int num : arr5){
//        std::cout << num << " " ;
//    }
//
//    // list 문에서도 가능
//    std::map<int> arr6 = {1, 2, 3, 5, 6, 10, 20};
//
//    for(int num : arr6){
//        std::cout << num << " " ;
//    }
    
 return 0;
}


