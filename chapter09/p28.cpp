#include <iostream>
using namespace std;
int main(void)
{
    char s[100] = "12345";
    char *p = s;

    cout << p << endl;
    cout << p + 2 << endl;
    cin >> p;
    cout << s << endl;

    return 0;
}