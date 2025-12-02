#include <iostream>
#include <string>
#include <vector>

// 변수 자동 추론 Compile time에 변수가 어떤 Type인지 결정
// Compile time : 빌드시간이 늘어나며 Runtime 오버헤드 없음
// Runtime 동작 문법 : 빌드는 빠르지만 Runtime 성능에 영향


// 컴파일 타임에 변경
// 컴파일 타임 <-- 개발자

// 런타임 관련 -- 실제 사용자

//void go(int a, auto b) // AUTOSAR는 권장 안함 argument / return 값 auto
// const int* -> auto로 대체 가능하지만 불변성 강조를 위해 안씀
// 가독성 vs 명시적 코드(개발자의 의도를 더 잘 드러낼 수 있는 경우)


using std::string;

int vari5(){
    
    auto x = 10; // 가독성에 도움이 될 때 사용
    
    std::vector<int>arr = {3, 4, 5,25, 34, 2, 3};
    
    std::cout << x << std::endl;
    
    
    // 가독성이 좋아지는 예시
    for(std::vector<int>::iterator it = arr.begin(); it != arr.end(); ++it){
        std::cout << *it;
    }
    
    for(auto it = arr.begin(); it != arr.end(); ++it){
        std::cout << *it;
    }
    
    
    
    return 0;
}
