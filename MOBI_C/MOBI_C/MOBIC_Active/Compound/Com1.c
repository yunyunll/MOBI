#include <stdio.h>

struct Point{
    int x,y;
};
void com1_foo(int *parr){}
void com1_goo(struct Point pt){}

int Com1(void){
    
    int n1 = 10;
    int n2 = (int){10}; // literal (타입){값}
    
    struct Point pt1 = {1,2};
    struct Point pt2 = (struct Point){1,2};
    
    int x1[2] = {1,2};
    int *p1 = x1;
    int *p2 = (int[2]){1,2};
    
    int x[3] = {1,2,3};
    com1_foo(x);
    
    com1_foo((int[3]){1,2,3});
    
    struct Point pt = {1,1};
    com1_goo(pt);
    
    com1_goo((struct Point){1,1});
    
    
    

    return 0;
    
}

