#include <iostream>
#include <set>
#include <map>


int container2() {
    
    // std::set 사용하기
    std::set<int> st1 = { 7, 4, 2, 4, 4};
    
    // element 추가
    st1.emplace(4);
    st1.emplace(3);
    
    
    // 중복을 제외한 개수
    std::cout << st1.size() << " ";
    
    for(int num : st1){ // Binary Search Tree
        std::cout << num << " ";
    }

    // std::map 사용하기
    std::map<int,std::string> mp1 = {{3,"HI"}, {6,"KFC"}};
    
    // element 추가
    mp1.emplace(10, "OK");
    mp1.emplace(17, "HELLO");
    
    if(mp1.count(3)){ // 키가 존재하는지 확인
        std::cout << mp1[3] << '\n';
    }
    if(mp1.count(17)){
        std::cout << mp1[17] << '\n';
    }
    
    
    return 0;
}
