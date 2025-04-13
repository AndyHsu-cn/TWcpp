#include <iostream>
using namespace std;
const int LEN = 10;
int main(void)
{
    char s[LEN] = {0};
    int n = 0;

    do
    {
        cin >> s[n];
        n++;
    } while (s[n - 1] != '#' && n < LEN);
    for (int i = 0; i < n - 1; i++)
        cout << s[i];
    cout << endl;

    return 0;
}