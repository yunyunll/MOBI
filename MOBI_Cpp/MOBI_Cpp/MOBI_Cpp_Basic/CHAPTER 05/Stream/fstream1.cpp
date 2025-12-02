#include <iostream>
#include <fstream>

// 파일 출력하기
// fstream 라이브러리의 ofstream(output file) 파일 읽고 쓸 수 있음

// 파일은 OS가 관리한다
// 파일은 SW를 넘어 Disk라는 HW장치

// 파일 Opend의 의미
// 파일 내용을 읽는 것이 아님
// 파일을 사용하겠다고 OS에게 준비시키는 과정

// Close 코드 생략가능
// close()는 파일 Open에 대한 정리작업 자동호출
// RAII 구현에 의해 close()는 생력하더라도 블럭에 벗어나면 자동으로 close()호출

// 파일 입출력의 사용하는가
// 파일은 로그파일을 생성할 때 사용될 수 있지만 직접 파일출력문을 쓰지 않고 파일출력 대신 로그 Library를 더 많이 사용
// 데이터를 파일로 저장할 때 사용될 수 있지만 파일 입력 대신 실제로는 DB를 사용한 데이터 저장을 더 많이 사용
// config 데이터는 ini library을 더 많이 사용
// json 데이터는 json library을 더 많이 사용

// 파일 입출력의 사용할 때
// Custome 파일 포멧을 구현하는 경우 - 자체 이미지 파일 저장 구현하기, 게임 개발시 자체 포멧 사용하기
// 임베디드 개발시 소량의 데이터 저장시 Library 사용을 최소화

int fstream1() {
    std::cout << std::filesystem::current_path() << std::endl;
    

    // output file 오픈
    std::ofstream out { "output.txt"};
    
    // input file 오픈
    std::ifstream in { "input.txt"};

    std::ifstream inFile { "input.txt"};
    if(!inFile){
        std::cout << "파일 Open에 실패" ;
        return 0;
    }
    
    int x;
    in >> x;
    std::cout << "입력 : " << x;
    
    out << "BYE BYE ";
    out << "BYE BYE ";
    
    inFile.close();
    
    return 0;
}
