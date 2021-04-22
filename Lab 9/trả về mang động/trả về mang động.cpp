// trả về mang động.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char *add(char* a, char* b)
{
    string s1 = a;
    string s2 = b;
    string s3 = s1 + s2;
    char* arr = new char[100];
    for (int i = 0; i <= s3.size(); i++)
    {
        arr[i] = s3[i];
    }
    return arr;
}
int main()
{
    char a[] = "NguyenVinhDung";
    char b[] = "UET";
    cout << add(a, b);
    return 0;
}
