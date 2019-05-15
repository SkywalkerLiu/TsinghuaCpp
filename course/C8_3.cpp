/***********
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

class Shape{
public:
    Shape() {}
    virtual ~Shape() {}
};

class Triangle: public Shape{
public:
    Triangle() {}
    ~Triangle() {}
};

class Rectangle: public Shape {
public:
    Rectangle() {}
    ~Rectangle() {}
};

/*用dynamic_cast类型转换操作符完成该函数*/
/********
int getVertexCount(Shape * b){
    Triangle* t = dynamic_cast<Triangle*>(b);
    if (t == nullptr)
    {
        Rectangle* r = dynamic_cast<Rectangle*>(b);
        if(r == nullptr)
            return 0;
        else
            return 4;
    }
    else
        return 3;
}

int main() {
    Shape s;
    cout << getVertexCount(&s) << endl;
    Triangle t;
    cout << getVertexCount(&t) << endl;
    Rectangle r;
    cout << getVertexCount(&r) << endl;
}
*******/
