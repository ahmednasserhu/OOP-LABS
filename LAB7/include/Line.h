#ifndef LINE_H
#define LINE_H
#include "Shape.h"
#include <graphics.h>
#include "OperatorOverloading.h"
class Line:public Shape
{

public:

    Line()
    {
    }

    Line(int x,int y,int z,int t,int c):Shape(x,y,z,t,c)
    {
    }

    void draw()
    {
        setcolor(color);
        line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }
};//End Line class

#endif // LINE_H
