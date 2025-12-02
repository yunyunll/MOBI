#include <iostream>

using namespace std;

// 1. 템플릿을 사용하지 않고 find reverse remove 멤버 함수로 만든다면
// 3개 컨테이너 * 3개의 함수 * 3개의 타입 = 27개의 함수

// 2. 템플릿을 사용해서 find reverse remove 멤버 함수로 만든다면
// 3개 컨테이너 * 3개의 함수 = 9개의 함수

// 3. find reverse remove 멤버 함수가 아닌 일반 함수로 만든다면
// 3개 컨테이너 = 3개의 함수
// 모든 컨테이너의 요소를 동일한 방식으로 접근 - 반복자

// STL은 자료구조와 알고리즘이 분리된 라이브러리


template<typename T1 , typename T2>
T1 contain_efind(T1 first, T1  last, T2 value){
    while (first != last && *first != value)
        ++ first;
    
    return first;
}


template<typename T> struct Node{

    T data;
    Node* next;
    
    Node(const T& a, Node* n) : data(a),next(n){}
    
};


template<typename T> class slist_iterator{

    Node<T>* current = 0; // 내부적으로 slist 안의 Node를 가리키는 멤버
public:
    slist_iterator(Node<T>* p = 0) : current(p){}

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

template<typename T> class slist{

    Node<T>* head = 0;
public:
    void push_front(const T& a){
        head = new Node<T>(a,head);
    }

    using iterator = slist_iterator<T>;
    
    iterator begin(){
        return iterator(head);
    }
    
    iterator end(){
        return iterator(0);
    }
    
};

int contain4(){
    slist<int> s;
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_front(40);
    
    s.push_front(50);
    slist<int>::iterator p =s.begin();
    
    slist<int>::iterator p2 = contain_efind(s.begin(),s.end(),20);
    
    if( p2 == s.end()){
        cout << "fail" << endl;
    }
    else
        cout << *p2 << endl;
                             
    


    return 0;
}
