// memories of struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct memories
{
    int x;
    int y;
    memories(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};
int main()
{
    memories P(3, 5);
    cout << &P << endl;
    cout << &(P.x) << " " << &(P.y); // địa chỉ của struct P trùng với địa chỉ của phương thức đầu tiên mình khai báo
    return 0;
}

