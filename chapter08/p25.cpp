#include <iostream>
using namespace std;
void swap(int *ptrA, int *ptrB);
int main(void)
{
    int a = 10, b = 20;

    cout << a << " " << b << endl;
    cout << &a << " " << &b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}

void swap(int *ptrA, int *ptrB)
{
    int temp;

    cout << ptrA << " " << ptrB << endl;
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}