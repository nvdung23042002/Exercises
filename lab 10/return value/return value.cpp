// return value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// parameter and reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

Point mid_point(Point a, Point b)
{
    Point s(0, 0);
    s.x = (a.x + b.x) / 2;
    s.y = (a.y + b.y) / 2;
    return s;
}

void print(Point a)
{
    cout << a.x << " " << a.y << endl;
    cout << &a << endl;
}
int main()
{
    Point a(5, 8);
    Point b(2, 5);

    print(mid_point(a,b));
}
