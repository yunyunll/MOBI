#include <iostream>
#include <string.h> // C헤더
#include <string> // STL string
#include <utility> // 서로 다른 타입의 객체 2개를 보관


using namespace std;


template<typename T> struct Node{
//
//    Node 타입 모양
//    data
//    *next
    T data;
    Node* next;
    
    Node(const T& a, Node* n) : data(a),next(n){}
    
};

template<typename T> class contain1_slist{

    Node<T>* head = 0;
public:
    void push_front(const T& a){
        head = new Node<T>(a,head);
    }
};

//              요소 간 이동         요소 접근
//  배열         ++p               *p
//  slist       p = p ->next      p -> data

int contain1(){
    contain1_slist<int> s;
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_front(40);
    s.push_front(50);
    


    return 0;
}
