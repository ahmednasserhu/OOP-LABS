#include<graphics.h>
#include <iostream>

using namespace std;


class Point{
private:
    int x;
    int y;
public:

    Point(){
        this->x = 0;
        this->y = 0;
    }

    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

   void setX(int x){
        this->x = x;
   }

   void setY(int y){
        this->y = y;
   }

   int getX(){
        return this->x;
   }
   int getY(){
        return this->y;
   }

};//End class


class Line{
private:
    Point p1;
    Point p2;

    Point* pLeft;
    Point* pRight;
public:

    Line(){
        pLeft = NULL;
        pRight = NULL;
    }

    Line(int x,int y,int z,int t):p1(x,y),p2(z,t){

    }

    void takePoints(Point* p1, Point* p2){
        pLeft = p1;
        pRight = p2;
    }

    void drawLineAggregation(){
        if(pLeft == NULL && pRight == NULL){
            return;
        }
        else{
            line(pLeft->getX(),pLeft->getY(),pRight->getX(),pRight->getY());
        }
    }

    void drawLineAssociation(Point p1,Point p2){
        line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }

    void drawLine(){
	    line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
	}


};//End class

class Circle{
private:
    Point center;
    int radius;

    Point *c;
public:

    Circle(int radius){
        c = NULL;
        this->radius = radius;
    }

    Circle(int x,int y, int radius):center(x,y){
        this->radius = radius;
    }

    int getRadius(){
        return this->radius;
    }

    void takeCenter(Point* center){
        c = center;
    }

    void drawCircleAggregation(){
        if(c == NULL){
            return;
        }
        else{
            circle(c->getX(),c->getY(),getRadius());
        }
    }

    void drawCircleAssociation(Point p1){
        circle(p1.getX(),p1.getY(),getRadius());
    }

    void drawCircle(){
	    circle(center.getX(),center.getY(),getRadius());
	}

};



int main()
{
    int gd  = DETECT , gm;
    initgraph(&gd,&gm,(char*)"");

    //Line l1(5,7,125,144);
    //l1.drawLine();

    /* line aggregation
    Line l2;
    Point p1(50,70);
    Point p2(125,144);
    l2.takePoints(&p1,&p2);
    l2.drawLineAggregation();
    */

    /* circle aggregation
    Circle c2(100);
    Point p1(250,250);
    c2.takeCenter(&p1);
    c2.drawCircleAggregation();
    */

    /* line association
    Line l3;
    Point p1(50,70);
    Point p2(125,144);
    l3.drawLineAssociation(p1,p2);
    */

    /* circle association
    Circle c2(100);
    Point p1(250,250);
    c2.drawCircleAssociation(p1);
    */

    //Circle c1(150,150,100);
    //c1.drawCircle();

    getch();
    closegraph();
}
