#include <iostream>

using namespace std;

void check_address(int n)
{
    cout << &n<< endl;
}

void check_refer(int &x)
{
    cout << &x<< endl;
}

int main()
{
    int n;
    cout << &n << endl;
    check_address(n);
    // khác nhau giữa địa chỉ đối số và tham số
    int m;
    cout << &m << endl;
    check_refer(m);
    // địa chỉ của tham số và đối số giống nhau khi ta dùng tham chiếu
    return 0;
}
