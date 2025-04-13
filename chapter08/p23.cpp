#include <iostream>
using namespace std;
void swap(int &x, int &y);
int main(void)
{
    int a = 10, b = 20;

    cout << a << " " << b << endl;
    cout << &a << " " << &b << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}

void swap(int &x, int &y)
{
    int temp;

    cout << &x << " " << &y << endl;
    temp = x;
    x = y;
    y = temp;
}