#include<graphics.h>
#include <iostream>

using namespace std;


class Point
{
protected:
    int x;
    int y;
public:

    Point()
    {
        this->x = 0;
        this->y = 0;
    }

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void setX(int x)
    {
        this->x = x;
    }

    void setY(int y)
    {
        this->y = y;
    }

    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }

};//End point class

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
    void draw()
    {
        cout<<"Shape"<<endl;
    }

};//End shape class

class Line:public Shape
{

public:

    Line(){
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

class Circle:public Shape
{
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

class Rect:public Shape
{

public:

    Rect(){
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


istream & operator >> (istream &in,  Line &l)
{
    int x,y,z,t,c;
    cout<<"please enter point 1: "<<endl;
    in >> x;
    in >> y;
    cout<<"please enter point 2: "<<endl;
    in >> z;
    in >> t;
    cout<<"please enter the color:"<<endl;
    in >> c;
    l.setPoints(x,y,z,t);
    l.setColor(c);
    return in;
}

istream & operator >> (istream &in,  Rect& r)
{
    int x,y,z,t,c;
    cout<<"please enter point 1: "<<endl;
    in >> x;
    in >> y;
    cout<<"please enter point 2: "<<endl;
    in >> z;
    in >> t;
    cout<<"please enter the color:"<<endl;
    in >> c;
    r.setPoints(x,y,z,t);
    r.setColor(c);
    return in;
}

istream & operator >> (istream &in,  Circle& cir)
{
    int x,y,radius,c;
    cout<<"please enter the center: "<<endl;
    in >> x;
    in >> y;
    cout<<"please enter the radius:"<<endl;
    in >> radius;
    cout<<"please enter the color:"<<endl;
    in >> c;
    cir.setRadius(radius);
    cir.setPoint(x,y);
    cir.setColor(c);
    return in;
}

void userInterface(void) {
    int num_shapes = 0;
    int type = 0;
    cout << endl;
    cout << "please enter the number of shapes: ";
    cin >> num_shapes;

    Line *lines = new Line[num_shapes];
    Circle *circles = new Circle[num_shapes];
    Rect *rectangles = new Rect[num_shapes];

    int lineCounter = 0, circleCounter = 0, rectCounter = 0;

    for (int i = 0; i < num_shapes; i++) {
        cout << "enter the corresponding code for the shape that you want: ";
        cin >> type;

        switch (type) {
            case 0: {
                Line l1;
                cin >> l1;
                lines[lineCounter] = l1;
                lineCounter++;
                break;
            }
            case 1: {
                Circle c1;
                cin >> c1;
                circles[circleCounter] = c1;
                circleCounter++;
                break;
            }
            case 2: {
                Rect r1;
                cin >> r1;
                rectangles[rectCounter] = r1;
                rectCounter++;
                break;
            }
            default:
                cout << "Invalid shape type" << endl;
                break;
        }
    }

    for (int i = 0; i < lineCounter; i++) {
        lines[i].draw();
    }
    for (int i = 0; i < circleCounter; i++) {
        circles[i].draw();
    }
    for (int i = 0; i < rectCounter; i++) {
        rectangles[i].draw();
    }

    delete[] lines;
    delete[] circles;
    delete[] rectangles;
}

 int main()
{
    cout << "----------------------------> USER GUIDE <----------------------------" << endl;
    cout << "Line: 0,   Circle: 1,   Rectangle: 2"<<endl;
    cout << "BLUE=> 1, GREEN=> 2, CYAN=> 3, RED=> 4, LIGHTGREEN=> 10, LIGHTRED 12, YELLOW=> 14, WHITE=> 15"<<endl;

    int gd  = DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    userInterface();
    getch();
    closegraph();
    return 0;
}
