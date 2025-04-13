#include <iostream>
using namespace std;
int main(void)
{
    int a = 10;
    int * p1 = &a;

    cout << "value of a = " << a << endl;
    cout << "value of p1 = " << p1 << endl;
    cout << "address of a = " << &a << endl;
    cout << "address of p1 = " << &p1 << endl;
    cout << "value of the variable pointed by p1 = " << *p1 << endl;

    return 0;
}