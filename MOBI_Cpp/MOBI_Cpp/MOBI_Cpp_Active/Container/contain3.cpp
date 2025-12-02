#include <iostream>

// 반복자 (iterator)
// 포인터와 유사하게 동작하는 객체 (++로 이동하고 *로 요소 접근)

// efind 함수 조건
// 요소 간 이동  전위형 ++
// 요소에 접근   *연산자
template<typename T1 , typename T2>
T1 contain_efind(T1 first, T1  last, T2 value){
    while (first != last && *first != value)
        ++ first;
    
    return first;
}



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
template<typename T> class slist_iterator{

    Node<T>* current = 0; // 내부적으로 slist 안의 Node를 가리키는 멤버
public:
    slist_iterator(Node<T>* p = 0) : current(p){}
    
    //    slist_iterator it = ...;
    //    ++it;   // ← 이게 operator++() 호출
    slist_iterator& operator++(){   // ++it
        current = current->next;   // 다음 노드로 이동
        return *this;
    }
    
    T& operator*() {return current->data;}
    
    bool operator ==(const slist_iterator& it){
        return current == it.current;
    }
    bool operator !=(const slist_iterator& it){
        return current != it.current;
    }
    
};


// ++p : operator++()
//  *p : operator*()

// begin : 처음 노드를 가리키는 iterator 리턴
//   end : 마지막 노드 (0)를 가리키는 iterator 리턴

template<typename T> class slist{

    Node<T>* head = 0;
public:
    void push_front(const T& a){
        head = new Node<T>(a,head);
    }
    
    //반복자 이름을 약속된 형태 "iterator"
//    typedef slist_iterator<T> iterator;
    using iterator = slist_iterator<T>;
    
    iterator begin(){
        return iterator(head);
    }
    
    iterator end(){
        return iterator(0);
    }
    
};

int contain3(){
    slist<int> s;
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_front(40);
    s.push_front(50);
    
    // 반복자 타입 이름 "iterator" 약속된 이름으로 typedef
    // 반복자 타입 이름은 "컨테이너이름::iterator"
    
    slist<int>::iterator p =s.begin();
    
    slist<int>::iterator p2 = contain_efind(s.begin(),s.end(),20);
    
    if( p2 == s.end()){
        cout << "fail" << endl;
    }
    else
        cout << *p2 << endl;
                             
                                    
                                    
    
//    cout << *p << endl; // 50
//    ++p;
//    cout << *p << endl; // 40
//
//    while (p != s.end()){
//        cout << *p << endl;
//        ++p;
//    }
    


    return 0;
}
