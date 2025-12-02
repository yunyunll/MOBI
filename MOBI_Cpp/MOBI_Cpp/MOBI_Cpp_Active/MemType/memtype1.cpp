#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

// 인자로 전달된 컨테이너의 1번재 요소를 출력하는 함수

//void print(vector<int>& c){
//    int n = c.front();
//    cout << n << endl;
//}

// template 로 전환하기

//template<typename T>
//void print(vector<T>& c){
//    T n = c.front();
//    cout << n << endl;
//}

// 모든 컨테이너 사용

template<typename T>
void print(T& c){
    
    // T : list<double>
    // 우리가 필요한 건 : double
    double n = c.front();
    cout << n << endl;
}


int memtype1(){
    
    list<double> v = {1,2,3};
    print(v);
    
    return 0;
}


//template<typename T> class list{
//public:
//    typedef T value_type; // 핵심...
//};
//
//list<int> s = {1,2,3};
//list<int>::value_type n = s.front();
