#include <iostream>
using namespace std;
int i = 5;
int main(void)
{
    for ( ; i < 20; i++)
        cout << i << " ";
    cout << "\n";
    int i = 2;
    cout << i << "\n";
    cout << ::i << "\n";

    return 0;
}