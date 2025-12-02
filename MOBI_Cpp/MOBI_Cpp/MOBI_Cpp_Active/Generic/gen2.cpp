#include <iostream>
#include <cstring>

using namespace std;

// 검색 구간의 일반화   Gen1을 참조
// 검색 대상 타입의 일반화

// 구간의 타입과 찾는 요소의 타입이 같지 않게
template<typename T1 , typename T2>
T1 gen2_efind(T1 first, T1  last, T2 value){ // 스마트포인터 T* => 무조건 포인터 T => 포인터일수도 아닐수도
    while (first != last && *first != value) // false while문 탈출
        ++ first;
    
//    return first == last ? 0 : first;
    // 마지막 요소는 검색 대상에 들어가지 않음
    return first;
}

//// 구간의 타입과 찾는 요소의 타입이 같다면?
//template<typename T>
//T gen2_efind(T first, T last, T value){ // 스마트포인터 T* => 무조건 포인터 T => 포인터일수도 아닐수도
//    while (first != last && *first != value) // false while문 탈출
//        ++ first;
//    
////    return first == last ? 0 : first;
//    // 마지막 요소는 검색 대상에 들어가지 않음
//    return first;
//}



int gen2(){

    double x[10] = {1,2,3,4,5,6,7,8,9,10};
    
    double* p = gen2_efind(x, x + 10,12324.0); // double 배열에서 int를 검색하면 오류
    
    if( p == 0){
        cout << "fail" << endl;
    }
    else {
        cout << "success : " << *p <<endl;
    }
    
    
    return 0;
}
