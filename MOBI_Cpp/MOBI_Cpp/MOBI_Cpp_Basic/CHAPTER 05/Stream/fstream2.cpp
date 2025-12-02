#include <iostream>
#include <fstream>

// 파일 입력에서 오류 가능성 생각해보기
// 파일 입력코드에서는 더 조심 해야함
// 추천 삽입 코드
// try~catch(필수)
// 입력데이터 검증코드
// 파일 사이즈 검사 코드
// 매직넘버 검사코드

// 파일입출력은 HW를 제어하는 코드
// 파일입출력은 SW 처리를 넘어 HW를 제어하는 것
// HW는 실패율이 높으며 언제든 고장이 날 수도 있다고 생가갛고 코딩

int fstream2() {
    std::cout << std::filesystem::current_path() << std::endl;

    try{
        // 파일 제어하는 모든 코드는 Exception이 발생될 수 있다
        // HW는 언제 고장이 발생될지 알 수 없음
        
        // 메모리가 차서 OS가 파일 Open 실패
        std::ofstream outFile { "output.txt"};
        
        if(!outFile){
            // 해당 코드로는 Open Exception의 모든 에러처리 불가
            std::cout << "파일 Open에 실패" ;
            return 0;
        }
        
        // 쓰기에 HW가 고장나거나 버퍼가 차거나 Disk가 차면 Exception발생
        outFile << "File Write Test\n";
    }
    // 안정성 확보하기
    // 파일을 다룰 때는 try~catch문 필수
    // 반드시 HW고장이 항상 일어난다고 생각하고 코딩
    
    catch(const std::exception &e){
        std::cout << "파일 오류 발생\n";
        std::cout << e.what();
        
    }
    
    
    return 0;
}
