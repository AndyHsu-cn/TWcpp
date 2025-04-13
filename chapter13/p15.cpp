#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s = "大家好";
    string t = s;
    int n;

    cout << s << endl;
    n = s.length();
    cout << n << endl;
    for (int i = 0; i < n - 2; i = i + 3)
    {
        t[n - i - 3] = s[i];
        t[n - i - 2] = s[i + 1];
        t[n - i - 1] = s[i + 2];
    }
    cout << t << endl;
    

    return 0;
}