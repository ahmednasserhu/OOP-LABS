#include "OperatorOverloading.h"
#include <iostream>

istream & operator >> (istream &in, Shape &s){
    int x,y,z,t,c;
    cout<<"please enter point 1: "<<endl;
    in >> x;
    in >> y;
    cout<<"please enter point 2: "<<endl;
    in >> z;
    in >> t;
    cout<<"please enter the color:"<<endl;
    in >> c;
    s.setPoints(x,y,z,t);
    s.setColor(c);
    return in;
}


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
