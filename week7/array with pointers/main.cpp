#include <iostream>

using namespace std;
void read(int b[10], int * a)
{
    cout << sizeof(b) << endl;
    cout << sizeof(a) << endl;
}
int main()
{
    int * a = new int [10];
    for(int i=0; i< 10; i++)
    {
        a[i]=i;
    }
    for(int i=0; i< 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << sizeof(a);
    cout << endl;
    int b[10];
    cout << sizeof(b);
    cout << endl;
    read(b,a);
    return 0;
}
