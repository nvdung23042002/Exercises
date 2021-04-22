#include <iostream>
#include <string>
using namespace std;

void check_array(int a[1000])
{
    for(int i=0; i<=4; i++)
    {
        a[i]=i;
    }
}

void check_string(string &s)
{
    s = s + "bay";
}

int main()
{
    int a[1000];
    check_array(a);
    for(int i=0; i<=4; i++)
    {
        cout << a[i]<<" ";
    }
    cout << endl;
    string s="dung ";
    check_string(s);
    cout << s << endl;
    // Chúng ta thấy rằng mảng được truyền theo cơ chế tham chiếu còn string giống như các kiểu dữ liệu cơ bản khác đều được
    // truyền bằng tham trị
    return 0;
}
