#include <iostream>
using namespace std;
int main(void)
{
    int a = 10;
    int * ptr1;
    int * ptr2;

    ptr1 = ptr2 = &a;
    cout << *ptr1 << endl;
    *ptr2 = 5;
    cout << *ptr1 << endl;
    (*ptr1)++;
    cout << a << endl;

    return 0;
}