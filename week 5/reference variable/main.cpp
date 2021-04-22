#include <iostream>

using namespace std;

int main()
{
    int i=5;
    int &k = i;
    cout << &k<< endl;
    cout << &i;
    // biến tham chiếu và biến đều chiều tới 1 biến trong bộ nhớ

    // không thể khai báo một biến mà chưa chiếu tới biến thường
    int j = 6;
    int &k =j;
    // không thể tham chiếu tới một biến khác đích ban đầu của nó được

    return 0;
}
