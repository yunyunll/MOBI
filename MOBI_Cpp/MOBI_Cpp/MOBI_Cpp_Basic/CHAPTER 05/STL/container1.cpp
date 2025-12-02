#include <iostream>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
#include <string>
#include <vector>

// Sequence Container(데이터 순차적 저장) - Array, Vector, list, deque
// std::array(모던 C++) - C언어 스타일 Wrapper
// std::vector : 동적 배열 - 가장 많이 쓰이는 기본 컨테이너
// std::list : 양방향 Linked List - 원소 탐색으 느리지만, 추가/삭제가 빠름
// std::deque : 양방향 deque - 양 끝 원소 추가 / 삭제가 빠른 큐

// vector 사용 Tip
// 객체 삽입에는 push_back대신 emplace_bakc을 선호


// Associative Container(특정 규칙 기반 저장) - Set/Map, Unordered_set/Unordered_map
// std::set : key만 저장 , 정렬된 상태 유지
// std::map : key,value 저장 , 정렬된 상태 유지
// std::unordered_set/std::unordered_map : 원소의 순서 랜덤적임



// Adapter Container(Sequence Container를 기반으로 동작) - priority_queue, stack/queue
//priority_queue : std::vector로 만들어짐 우선순위 element 빠르게 찾음
// stack / queue : std::queue로 만들어짐 Stack,Queue용도로 사용함을 알리기 위해 사용

struct Node{
    int a,b;
};


int container1() {
    
    std::set<int> st1 = { 4,4,4,24,24,4,3};
    
    // 순차 저장이 아닌, 특정 규칙 기반(Binary Search Tree)저장
    for(int num : st1){ // Binary Search Tree
        std::cout << num << " ";
    }

    std::unordered_set<int> st2 = { 4,4,4,24,24,4,3};
    for(int num : st2){ // Binary Search Tree
        std::cout << num << " ";
    }

    std::map<int,int> mp1;
    
    mp1[24] = 55;
    mp1[10] = 100;

    for (auto& [k, v] : mp1) {
        std::cout << k << " : " << v << '\n';
    }
    
    std::map<std::string,int> mp2;
    
    mp2["HOHO"] = 55;

    for (auto& [k, v] : mp2) {
        std::cout << k << " : " << v << '\n';
    }
    
    std::vector<int> arr1;
    arr1.push_back(34);
    
    std::vector<std::string> arr2;
    arr2.push_back("HOHO"); // 임시객체 생성 후 복사가 일어남 - 복사2번
    arr2.emplace_back("HUHU"); // 복사 한번 - 객체타입 때 주로 사용
    
    std::vector<Node> arr3;
    arr3.push_back({3,4});
    arr3.emplace_back(5,6);
    
    
    return 0;
}
