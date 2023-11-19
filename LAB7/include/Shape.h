#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"
#include <iostream>

using namespace std;

class Shape
{
protected:
    Point p1;
    Point p2;
    int color;
public:

    Shape(){
    }

    Shape(int x,int y,int z,int t,int _color):p1(x,y),p2(z,t)
    {
        color = _color;
    }

    Shape(int x,int y, int _color):p1(x,y)
    {
        color = _color;
    }

    void setPoints(int _x,int _y,int _z,int _t)
    {
        p1.setX(_x);
        p1.setY(_y);
        p2.setX(_z);
        p2.setY(_t);
    }
    void setPoint(int _x,int _y)
    {
        p1.setX(_x);
        p1.setY(_y);
    }

    void setColor(int _color)
    {
        color = _color;
    }

    int getcolor()
    {
        return this->color;
    }
    virtual void draw()
    {
        cout<<"Shape"<<endl;
    }

};//End shape class

#endif // SHAPE_H
