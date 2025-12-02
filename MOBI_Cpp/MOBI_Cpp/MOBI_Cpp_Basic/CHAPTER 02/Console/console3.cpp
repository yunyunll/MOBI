#include <stdio.h>
#include <iostream> // fill이라는 함수 존재
#include <string>

// using-directive 는 아예 사용하지 말자 using namespace
// 가독성을 위한다면 using-declaration std::cout
// Header 파일에는 using-declaration
// 중첩 namespace
namespace kfc{
    namespace bbq{
        namespace chicken{
            int x;
        }
    }
}

// namespac alias
namespace kbc = kfc::bbq::chicken;

// using-declaration
using kfc::bbq::chicken::x;





using std::string;
using std::cout; // using declaration 일부 허용

int console3(){
    
    // kfc::bbq::chicken::x = 10;
    // kbc::x = 50;
    x = 99;
    string str = "HI";
    cout << "A" << std::endl;

    
    
    
    return 0;
}
