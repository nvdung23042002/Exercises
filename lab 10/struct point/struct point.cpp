// struct point.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void print(Point s)
{
    cout << "(" << s.x << "," <<s.y << ")";
}
int main()
{
    int m, n;
    cin >> m >> n;
    Point a(m, n);
    print(a);
}

