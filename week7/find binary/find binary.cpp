
#include <iostream>
using namespace std;

int F(int a[10], int L , int R , int k)
{
    int M = (L + R) / 2;
    if (a[M] == k)
        return M;
    else
    {
        if (a[M] < k)
        {
            return F(a, M + 1, R, k);
            
        }
        if (a[M] > k)
        {
            return F(a, L, M - 1, k);
  
        }
    }
}

int main()
{
    int k = 17;
    int a[10] = {1,3,5,7,8,11,17,20};
    int L = 0;
    int R = 7;
    cout << F(a, L, R, k);
    return 0;
}

