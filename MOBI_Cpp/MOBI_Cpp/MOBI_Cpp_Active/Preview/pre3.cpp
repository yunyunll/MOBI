#include <iostream>
#include <string.h> // C헤더
#include <string> // STL string
#include <complex> // 복소수를 나타내는 헤더
// Exponential      : exp,log,log10
// Power            : pow,sqrt
// Trigonometric    : sin,cos,tan,asin,acos,atan
// Hyperbolic       : sinh, cosh,asinh,acosh,atan

using namespace std;

int pre3_complex(){
    
    complex<double> c1(1,0); // complex<double>, complex<float>, complex<long double> 형태만 가능
    
    cout << c1 << endl;
    cout << c1.real() << endl;
    cout << c1.imag() << endl;
    
    complex<double> c2 = sin(c1);
    cout << c2 << endl;
    
    complex<double> c5(3);      // 3,0
    complex<double> c6(3,1);    // 3,1
    complex<double> c7(3if);    // 0,3
    
    cout << c5 << endl;
    cout << c6 << endl;
    cout << c7 << endl;
    
    
    return 0;
}
