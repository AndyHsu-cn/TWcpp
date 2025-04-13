#include <iostream>
using namespace std;
int main(void)
{
    double a[3] = {10.5, 11.5, 12.5};
    double *p1 = &a[0];
    double *p2 = &a[2];

    cout << p2 - p1 << endl;

    return 0;
}