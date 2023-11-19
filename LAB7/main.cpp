#include <iostream>
#include <graphics.h>
#include "Interface.h"
using namespace std;

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
