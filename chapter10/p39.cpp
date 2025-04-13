#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    int rn;

    srand(0);
    for (int i = 0; i < 10; i++)
    {
        rn = rand();
        cout << rn << " ";
    }
    cout << endl;

    return 0;
}