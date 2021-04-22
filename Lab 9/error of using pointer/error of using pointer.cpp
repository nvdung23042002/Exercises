// error of using pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    //delete p;  sai ở đây ạ :3 vì xóa p thì p2 cũng biến mất nên không trỏ được ạ
    cout << p <<" "<< *p2;
    delete p2;
    return 0;
}
