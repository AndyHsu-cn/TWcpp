#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char *p = new char[100];
    const char *q = "12345";
    char a[100] = "1234567";

    cin >> p;
    cout << strlen(p) << endl;
    p[3] = '\0';
    cout << strlen(p + 1) << endl;
    delete [] p;

    cout << strlen(q) << endl;
    cout << strlen(a) << endl;

    return 0;
}