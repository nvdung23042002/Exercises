// lỗi con trỏ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a;
    cout << p;
    //delete p; chương trình báo lỗi
    return 0;
}
