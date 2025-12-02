#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int contain5(){
    
//    list<int> s = {1,2,3,4,5};
    vector<int> s ={1,2,3,4,5};
    
    reverse(s.begin(),s.end());
                             
    for(int i = 0; i < s.size(); i++){ // vector등 일부분의 컨테이너 사용가능/ list 불가
        cout << s[i] << endl;
    }
    
    vector<int>::iterator p = s.begin(); // 반복자 대두부분의 컨테이너 사용가능
    while (p!= s.end() ){
        cout << *p << endl;
        ++p;
    }

    // 참조로 요소를 받는다
    // 원본 요소를 직접 참조
    for(auto& n : s){ // s 내부의 값이 실제로 변경됨
        n = n * 2;
        cout << n << endl;
    }
    for(int i = 0; i < s.size(); i++){ // vector등 일부분의 컨테이너 사용가능/ list 불가
        cout << s[i] << endl;
    }
    
    
    // 값으로 요소를 받는다
    // 각 요소를 복사해 사용
    for(int n : s){ // 원본은 그대로 n만 변경됨
        n = n * 2;
        cout << n << endl;
    }
    for(int i = 0; i < s.size(); i++){ // vector등 일부분의 컨테이너 사용가능/ list 불가
        cout << s[i] << endl;
    }

    return 0;
}
