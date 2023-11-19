#include "Interface.h"
#include "OperatorOverloading.h"
#include "Point.h"
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include <graphics.h>
#include <iostream>
using namespace std;

void userInterface(void)
{
    int num_shapes = 0;
    int type = 0;
    cout << endl;
    cout << "please enter the number of shapes: ";
    cin >> num_shapes;

    Shape **shapes = new Shape *[num_shapes];
    int counter = 0;

    for (int i = 0; i < num_shapes; i++)
    {
        cout << "enter the corresponding code for the shape that you want: ";
        cin >> type;

        switch (type)
        {
        case 0:
        {
            shapes[i] = new Line();
            cin >> *dynamic_cast<Line *>(shapes[i]);
            break;
        }
        case 1:
        {
            shapes[i] = new Circle();
            cin >> *dynamic_cast<Circle *>(shapes[i]);
            break;
        }
        case 2:
        {
            shapes[i] = new Rect();
            cin >> *dynamic_cast<Rect *>(shapes[i]);
            break;
        }
        default:
            cout << "Invalid shape type" << endl;
            break;
        }
    }
    for (int i = 0; i < num_shapes; i++)
    {
        shapes[i]->draw();
    }

    for (int i = 0; i < num_shapes; i++)
    {
        delete shapes[i];
    }

    delete[] shapes;
}



