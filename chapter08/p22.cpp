#include <iostream>
using namespace std;
int main(void)
{
    int c = 10;
    int &d = c;

    d = 20;
    cout << c << endl;

    return 0;
}