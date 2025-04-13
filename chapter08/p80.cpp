#include <iostream>
using namespace std;
int main(void)
{
    int a[5] = {0};
    int *p = a;

    for (int i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0; i < 5; i++)
    {
        *p += 3;
        p++;
    }
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}