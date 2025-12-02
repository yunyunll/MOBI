#include <iostream>
#include <stdexcept>

// std::exception
// 모든 표준 exception 클래스의 base
// what() 메서드로 에러 메세지 출력 가능

// 개발시 std::exception만으로 구현가능하지만 가독성을 위해 더 구체적인 exception클래스 사용
// std::logic_error - invalid_argument,length_error,out_of_range
// std::runtime_error - range_error,overflow_error, underflow_error

// Custome Exception 사용
// 표준 Exception을 상속받아, 직관적으로 이해할 수 있는 Custom Exception제작
class small_to_bic_error : public std::runtime_error{
public:
    small_to_bic_error(const std::string& msg) : std::runtime_error{msg} {}
};

void exception2_go(int n){
    
    if(n == 5){
        throw std::runtime_error("5 No");
    }
    if(n < 0){
        throw std::out_of_range("NOT --");
    }
    if(n > 100){
        throw std::overflow_error("Over --");
    }
    if(n == 77){
        throw small_to_bic_error("Mine");
    }
}


int exception2() {
    
    try{
        exception2_go(77);
    }
    catch(const small_to_bic_error &e){
        std::cout << "me" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(const std::overflow_error &e){
        std::cout << "sfda" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(const std::out_of_range &e){
        std::cout << "sdfasdf" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(const std::exception &e){
        std::cout << "sfda" << std::endl;
        std::cout << e.what() << std::endl;
    }

    return 0;
}
