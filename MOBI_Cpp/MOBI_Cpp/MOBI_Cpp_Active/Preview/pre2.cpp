#include <iostream>
#include <string.h> // C헤더
#include <string> // STL string

#include <complex>

//using namespace std;
using std::cout;
using std::endl;
using std::string;

//using namespace std::string_literals;
//using namespace std::literals;


void pre2_str_foo(string s){
    cout << "string" << endl;
}

void pre2_str_foo(const char* s){
    cout << "char*" << endl;
}

int pre2_str(){
    
    using namespace std::literals;

    
    pre2_str_foo("hello"); // char* 우선
    pre2_str_foo("hello"s); // string 우선 // user define literals
    
    std::complex<double> c = 3i; //     using namespace std::literals;
    
    return 0;
}
