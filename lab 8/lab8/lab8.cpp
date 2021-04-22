#include <iostream>
#include <cstring>
using namespace std;


//char* pad_right(const char* a, int n) {
//    int lenN = strlen(a);
//    char* c = new char[max(lenN, n)];
//
//    for (int i = 0; i < n; i++) {
//        c[i] = a[i];
//    }
//
//    if (lenN < n) {
//        for (int i = lenN; i < n; i++) {
//            c[i] = 'c';
//        }
//    }
//
//    return c;
//}
void pad_right(char* s, int n)
{
    string s1 = s;
    if (s1.size() < n)
    {
        for (int i = s1.size(); i < n; i++)
        {
            s[i] = '_';
        }
    }
}

int main()
{
    char s[] = "dung";
    pad_right(s, 6);
    cout << s;
}