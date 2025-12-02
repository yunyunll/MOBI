#include <iostream>

// 구체적인 동작 방법을 숨기고, 접근방법 제공하기

// 캡슐화가 덜 되어있는 코드 예시

//class Restaurant{
//public:
//    void 카드제공(int card){};
//    void 결제요청(int card){};
//    void get잔돈()(int card){};
//    void get영수증()(int card){};
//};
//
//class Customer{
//public:
//    void haveDinner(Restaurant *restaurant){
//        restaurant->카드제공(myCard);
//        restaurant->결제요청();
//        myCash += restaurant->get잔돈();
//        myBill = restaurant->get영수증();
//    }
//
//private:
//    int myCard = 0;
//    int myCash = 0;
//    int myBill = 0;
//
//}

// 캡슐화가 잘 되어있는 코드 예시
// Server는 구체적인 내용을 줄이고 접근방법을 제공
// Client는 구체적인 내용을 몰라도 쉽고 안전한 접근 가능

//struct Resopnse{
//    int 잔돈;
//    int 영수증;
//};
//
//class Restaurant{
//public:
//    Resopnse 카드로음식결제 (int customerCard){
//        카드제공(customerCard){};
//        결제요청();
//        int charge = get잔돈();
//        int bill =  get영수증();
//        return {chare,bill};
//    }
//
//private:
//    void 카드제공(int card){};
//    void 결제요청(){};
//    void get잔돈(){};
//    void get영수증(){};
//
//};
//
//class Customer{
//public:
//    void haveDinner(Restaurant *restaurant){
//        Resopnse reponse = restaurant->카드로음식결제(myCard);
//        myCash += reponse.잔돈;
//        myBill = reponse.영수증;
//    }
//
//private:
//    int myCard = 0;
//    int myCash = 0;
//    int myBill = 0;
//
//}


int private4() {


    return 0;
}


