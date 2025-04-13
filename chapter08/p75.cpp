#include <iostream>
using namespace std;
int main(void)
{
    int a = 10;
    int * ptr = &a;

    cout << ptr++ << endl;
    // dangerous!
    cout << *ptr << endl;

    return 0;
}