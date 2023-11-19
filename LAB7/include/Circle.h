#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <graphics.h>
#include "OperatorOverloading.h"
class Circle:public Shape
{
private:
    int radius;
public:

    Circle(){
    }

    Circle(int x, int y, int c,int _radius):Shape(x,y,c)
    {
        radius = _radius;
    }

    int getRadius()
    {
        return this->radius;
    }

    void setRadius(int _radius){
        radius = _radius;
    }

    void draw()
    {
        setcolor(color);
        circle(p1.getX(),p1.getY(),getRadius());
    }
};//End Circle class

#endif // CIRCLE_H
