#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric> // accumulate

// 원본을 변경하지 않는 배열

// 직접 구현하는 것 보다 알고리즘 사용하는 것을 권장
// 안정성 가독성을 위해

bool algorithm2_isUnder10(int value){
    return value < 10;
}
bool algorithm2_isMultipleOf5(int value){
    return value % 5 == 0;
}

int algorithm2_makeDouble(int value){
    return value * value;
}

int algorithm2_accMultiple(int acc, int value){
    return acc * value;
}


int algorithm2() {

    // 포인터처럼 사용가능
    std::vector<int> arr = { 1, 3, 5, 7, 9 ,10, 13};
    std::string str = "AAFAFAAFA";
    
    
    // std::count(first,last,value)
    // 범위에서 value를 찾아 개수 반환하기
    auto t1 = std::count(arr.begin(), arr.end(),10);
    auto t2 = std::count(str.begin(), str.end(),'A');
    
    std::cout << t1 << std::endl;
    std::cout << t2 << std::endl;
    
    // std::count_if(first,last,predicate)
    // 범위에서 value를 찾아 개수 반환하기
    auto t3 = std::count_if(arr.begin(), arr.end(),algorithm2_isUnder10);
    
    std::cout << t3 << std::endl;
    
    // std::copy(first,last,output Iterator)
    // 범위의 모든 값을 Output Iterator에 Copy한다
    std::vector<int> output1;
    
    std::copy(arr.begin(), arr.end(),std::back_inserter(output1)); // push_back이 자동으로 호출되는 특수한 iterator
    
    for(int num : output1){
        std::cout << num << " ";
    }
    
    std::cout  << "\n";
    
    // std::copy_if(first,last,output Iterator,predicate)
    // 범위에서 조건에 맞는 값들만 Output Iterator에 Copy한다
    // 함수형 프로그래밍 패러다임에서는 Filtering
    std::vector<int> output2;
    
    std::copy_if(arr.begin(), arr.end(),std::back_inserter(output2),algorithm2_isMultipleOf5);
    
    for(int num : output2){
        std::cout << num << " ";
    }
    
    std::cout  << "\n";
    
    // std::transform(first,last,output Iterator,operator function)
    // 범위의 원소 값들을 연산함수(operator function)을 적용시킨 값으로 Output Iterator에 Copy한다
    // 함수형 프로그래밍 패러다임에서는 Mapping
    std::vector<int> output3;
    
    std::transform(arr.begin(), arr.end(),std::back_inserter(output3),algorithm2_makeDouble);
    
    for(int num : output3){
        std::cout << num << " ";
    }
    
    std::cout  << "\n";
    
    // std::accumulate(first,last,initValue,OperandFunc)
    // 범위내에서 왼쪽에서 오른쪽으로 값을 하나씩 누적연산을 하는 것 (left fold 동작)
    // 함수형 프로그래밍에서 reduce
    
    auto sum = std::accumulate(arr.begin(), arr.end(),0); // 0부터 누적합을 구함
    auto gop = std::accumulate(arr.begin(), arr.end(),1,algorithm2_accMultiple); // 1부터 누적곱을 구함
    
    std::cout << sum << " ";
    std::cout  << "\n";
    
    std::cout << gop << " ";
    std::cout  << "\n";


    
    
    return 0;
}
