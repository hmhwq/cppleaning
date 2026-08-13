#include <iostream>
#include "Point.h"
#include "Circle.h"

using namespace std;

int main()
{
    Circle c;
    Point center;
    center.setX(0);
    center.setY(0);
    c.setCenter(center);
    c.setR(5);

    Point p;
    p.setX(3);
    p.setY(4);

    if (p.isInCircle(c))
    {
        cout << "点在圆内或圆上" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }

    // cin.get();
    return 0;
}