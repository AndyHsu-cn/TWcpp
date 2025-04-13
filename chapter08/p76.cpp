#include <iostream>
using namespace std;
int main(void)
{
    double a[3] = {10.5, 11.5, 12.5};
    double *pa = &a[0];

    cout << *pa << " " << pa << endl;
    pa = pa + 2;
    cout << *pa << " " << pa << endl;
    pa--;
    cout << *pa << " " << pa << endl;

    return 0;
}