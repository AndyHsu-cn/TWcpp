#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    int rn;

    for (int i = 0; i < 10; i++)
    {
        rn = rand();
        cout << rn << " ";
    }
    cout << endl;

    return 0;
}