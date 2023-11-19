#ifndef RECT_H
#define RECT_H
#include "Shape.h"
#include <graphics.h>
#include "OperatorOverloading.h"
class Rect:public Shape
{

public:

    Rect()
    {
    }

    Rect(int x,int y,int z,int t,int c):Shape(x,y,z,t,c)
    {
    }

    void draw()
    {
        setcolor(color);
        rectangle(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }
};//End Rectangle class

#endif // RECT_H
