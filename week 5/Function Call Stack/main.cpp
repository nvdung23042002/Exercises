#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n * factorial(n-1);
        cout << "n= " << n <<" at " << &n << endl;
}
int main()
{
    int n;
    cin >> n;
     cout << factorial(n);
    return 0;
}
