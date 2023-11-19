#ifndef POINT_H
#define POINT_H


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

    void setX(int _x){
        this->x = _x;
    }
    void setY(int _y){
        this->y = _y;
    }
    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }

    ~Point() {}

};

#endif // POINT_H

