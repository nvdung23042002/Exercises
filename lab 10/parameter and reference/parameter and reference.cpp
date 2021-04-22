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

void increase(Point &a)
{
    a.x++;
    a.y = a.y + 2;
    cout << &a << endl;
}

void print(Point a)
{
    cout << a.x << " " << a.y<<endl;
    cout << &a << endl;
}
int main()
{
    Point a(5, 8);
    Point b(2, 5);
    increase(a);
    print(a);
    cout << &a;
}