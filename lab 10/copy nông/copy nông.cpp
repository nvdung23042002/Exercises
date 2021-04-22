// copy nông.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct pop
{
    int x;
    pop(int _x)
    {
        x = _x;
    }
};

void use(pop x)
{
    cout << &x;
}
int main()
{
    pop a(2);
    pop b(3);
    pop* p = &a;
    cout << p << endl;
    use(a);
    return 0;
}

