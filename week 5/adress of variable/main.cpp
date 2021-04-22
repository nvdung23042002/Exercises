#include <iostream>

using namespace std;

int main()
{
    int m,n;
    int a[100];
    char b[100];
    cout << &a[0]<<" " << &a[1]<< " "<< &a[2]<< endl;
    cout << (void*)&b[0]<<" " << (void*)&b[1]<< " "<< (void*)&b[2]<< endl;
    // ở mảng int, ta thấy địa chỉ các biến trong mảng cách nhau 4 ô nhớ
    // ở mảng char, tha thấy địa chỉ các ô nhớ khác nhau ở kí tự cuối cùng, tăng dần : c d e theo bảng chữ cái
    int c,d;
    cout << &m<<" " << &n <<" "<<&c <<" "<< &d;
    // các biến đa số đều cách nhau 4 ô nhớ
    return 0;
}
