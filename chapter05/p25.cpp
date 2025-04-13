#include <iostream>
using namespace std;
int max1(int a, int b);
void max2(int a, int b);
int main(void)
{
    int n = 0, m = 0;

    cin >> n >> m;
    cout << max1(n, m) << endl;
    max2(n, m);
    cout << endl;

    return 0;
}

int max1(int a, int b)
{
    return (a > b? a: b);
}

void max2(int a, int b)
{
    cout << (a > b? a: b);
}