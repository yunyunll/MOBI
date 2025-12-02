#include <iostream>
#include <vector>

// Generic Programming 패러다임
// 다양한 타입에 동작되는 프로그램 작성을 선호하는 것
// 주로 클래스 Template과 함수 Template을 이용하여 구현함

// 제네릭 프로그래밍 하는 이유
// 범용 타입의 Library를 만들기 위함 - 다양한 타입에서 사용가능
// 성능 최적화를 위함

// Template를 학습하는 이유
// STL을 잘 쓰려면 템플릿 문법을 알아야하기 때문
// vector와 같은 STL(Standard Template Library)의 동작 원리를 이해하기 위함

template <typename T>
T getAllSum(T *arr, int length){
    T result = 0;
    for(int i = 0; i < length; i++){
        result += arr[i];
    }
    return result;
}

int template2() {
    std::vector<double> arr1 = {1.0, 2.0 ,3.0};
    double arr[3] = {1.0, 2.0 ,3.0};
    std::cout << getAllSum(arr, 3);

    return 0;
}
