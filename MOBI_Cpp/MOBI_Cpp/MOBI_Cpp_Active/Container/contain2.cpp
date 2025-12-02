#include <iostream>

// 반복자 (iterator)
// 포인터와 유사하게 동작하는 객체 (++로 이동하고 *로 요소 접근)


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
template<typename T> class contain2_slist_iterator{

    Node<T>* current = 0; // 내부적으로 slist 안의 Node를 가리키는 멤버
public:
    contain2_slist_iterator(Node<T>* p = 0) : current(p){}
    
    //    slist_iterator it = ...;
    //    ++it;   // ← 이게 operator++() 호출
    contain2_slist_iterator& operator++(){   // ++it
        current = current->next;   // 다음 노드로 이동
        return *this;
    }
    
    T& operator*() {return current->data;}
    
    bool operator ==(const contain2_slist_iterator& it){
        return current == it.current;
    }
    bool operator !=(const contain2_slist_iterator& it){
        return current != it.current;
    }
    
};


// ++p : operator++()
//  *p : operator*()

// begin : 처음 노드를 가리키는 iterator 리턴
//   end : 마지막 노드 (0)를 가리키는 iterator 리턴

template<typename T> class contain2_slist{

    Node<T>* head = 0;
public:
    void push_front(const T& a){
        head = new Node<T>(a,head);
    }
    
    contain2_slist_iterator<T> begin(){
        return contain2_slist_iterator<T>(head);
    }
    
    contain2_slist_iterator<T> end(){
        return contain2_slist_iterator<T>(0);
    }
    
};

int contain2(){
    contain2_slist<int> s;
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_front(40);
    s.push_front(50);
    
    contain2_slist_iterator<int> p =s.begin();
    
    cout << *p << endl; // 50
    ++p;
    cout << *p << endl; // 40
    
    while (p != s.end()){
        cout << *p << endl;
        ++p;
    }
    


    return 0;
}
