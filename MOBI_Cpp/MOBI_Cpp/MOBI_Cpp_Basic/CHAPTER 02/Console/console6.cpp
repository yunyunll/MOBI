#include <iostream>

int console6(){
    
    int x;
    int y;
    
    // 훈련할 때 가장 많이 씀
    // 현업에서는 잘 사용하지 않는다
    //scanf("%d", &x);
    // 수 하나 입력
//    std::cin >> x;
    
    // 수 두개 입력
    std::cin >> x >> y;
    
    printf("%d", x);
    std::cout << x + y;
    
    std::string str,str2;
    
    std::cin >> str >> str2;
    

    

    
    
    return 0;
}
