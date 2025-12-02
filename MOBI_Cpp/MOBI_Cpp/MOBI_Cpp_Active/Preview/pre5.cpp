#include <iostream>
#include <string.h> // C헤더
#include <string> // STL string
#include <utility> // 서로 다른 타입의 객체 2개를 보관


using namespace std;

//template<typename T1, typename T2> struct pair<{
//    T1 first;
//    T2 second;
    // ...
//};

pair<int,double> pr5_pair_foo(){
    return pair<int,double>(1, 3.4);
}


int pre5_pair(){

    pair<int,double> p1(1, 3.4);
    
    cout << p1.first << endl;
    cout << p1.second << endl;
    
    return 0;
}
