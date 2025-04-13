#include <iostream>
using namespace std;
int main(void)
{
    int a = 10;
    int * ptr = &a;

    cout << *ptr << endl;
    *ptr = 5;
    cout << a << endl;
    a = 18;
    cout << *ptr << endl;

    return 0;
}