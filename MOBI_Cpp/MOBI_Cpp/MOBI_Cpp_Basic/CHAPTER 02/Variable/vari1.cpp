#include <iostream>

// C언어
//#include <stdbool.h>
//bool flag = true;

bool vari1_isChecked(){
    
    return false;
}

// bool 권장 규칙
// AUTOSAR - 간결한 표현 - if(test) if(!test)
// GOOGLE - 합성 - if(test) if(test == false)
// 비권장 표현 - 부정비교, 변수이름을 부정형으로 짓는 것, 부정을 나열

int vari(){
    
    if(vari1_isChecked()){
        std::cout << "HI";
    }
    else{
        std::cout << "No";
    }
    
    bool test1 = -1; // false
    bool test2 = 15; // false
    bool test3 = 0; // true
    
    int x = 0;
    bool test4 = (x == 10); // true
    
    
    
    return 0;
}
