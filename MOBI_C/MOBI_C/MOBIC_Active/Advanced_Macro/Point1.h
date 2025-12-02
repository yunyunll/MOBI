//#pramag once // 이 header 파일은 한번만 포함해야한다고 컴파일러에게 알려줌

#ifndef POINT_H
#define POINT_H

struct _Point{
    int x;
    int y;
};

typedef struct _Point POINT;

#endif // POINT_H와 연관되어 있다고 알려주기

