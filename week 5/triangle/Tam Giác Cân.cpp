#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=n;i>=1; i--)
    {
        for(int j=1; j<=2*n-1; j++)
        {
            if(j>= (5-i+1) and j<=(5+i-1))
                cout << "*" ;
            else
                cout<<" ";
        }
        cout << endl;
    }
    return 0;
}
