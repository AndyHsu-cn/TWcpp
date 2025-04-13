#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void)
{
    int rn;

    srand(time(nullptr));
    for (int i = 0; i < 10; i++)
    {
        rn = rand() % 10 + 100;
        cout << rn << " ";
    }
    cout << endl;

    return 0;
}