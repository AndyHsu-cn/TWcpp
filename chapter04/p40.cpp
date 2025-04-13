#include <iostream>
using namespace std;
int main(void)
{
    int a[4] = {1, 2, 3, 4};
    int b[4] = {4, 3, 2, 1};
    int ip = 0;

    for (int i = 0; i < 4; i++)
        ip += a[i] * b[i];
    cout << ip << "\n";

    return 0;
}