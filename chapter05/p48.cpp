#include <iostream>
using namespace std;
void swap(int x, int y);
int main(void)
{
    int a = 10, b = 20;

    cout << a << " " << b << "\n";
    swap(a, b);
    cout << a << " " << b << "\n";

    return 0;
}

void swap(int x, int y)
{
    int tmp = x;

    x = y;
    y = tmp;
}