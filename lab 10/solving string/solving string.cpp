// solving string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

struct String
{
    int n ;
    char* s;

    void copy(char* s1, const char* s2)
    {
        for (int i = 0; i < sizeof(s); i++)
        {
            s1[i] = s2[i];
        }
    }
    String(const char * _s)
    {
        n = strlen(_s);
        s = new char[n];
        copy(s, _s);
    }
    ~String()
    {
        delete[] s;
    }

    void print()
    {
        cout << s << endl;
    }

    void append(const char* m)
    {
        s = strcat(s, m);
    }
};
int main()
{
    //String a("dung");
    String* p = new String("dung");
    p -> append(" bay");
    p -> print();
    return 0;
}
