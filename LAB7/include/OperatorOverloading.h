#ifndef OPERATOROVERLOADING_H_INCLUDED
#define OPERATOROVERLOADING_H_INCLUDED
#include <iostream>
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
istream & operator >> (istream &in,  Line &l);
istream & operator >> (istream &in,  Rect& r);
istream & operator >> (istream &in,  Circle& cir);

#endif // OPERATOROVERLOADING_H_INCLUDED
