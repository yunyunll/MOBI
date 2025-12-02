#include <iostream>
#include <string.h> // C헤더
#include <string> // STL string
#include <utility> // 서로 다른 타입의 객체 2개를 보관


using namespace std;

// pair 를 인자로 전달 받는 함수
template<typename T> void pre6_pair_foo(T p){

    cout << p.first << ", " << p.second <<endl;
    
}

//// 함수 템플릿 - #include <utility>  안에 있음
//template<typename T1, typename T2 >
//pair<T1,T2> make_pair(const T1& a,const T2& b)
//{
//    return pair<T1,T2>(a,b);
//}

int pre6s(){

    pair<int,double> p1(1, 3.4);
    
    pre6_pair_foo(p1);

    pre6_pair_foo(pair<int,int>(1,1));
    
//    foo(make_pair<int,int>(1,1));
    pre6_pair_foo(make_pair(1,1));
    
    pre6_pair_foo(pair(1,1)); // c++ 17부터 make_pair도 없어도 됨
    return 0;
}
