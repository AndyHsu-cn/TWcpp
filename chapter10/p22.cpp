#include <iostream>
#include <ctime>
using namespace std;
int main(void)
{
    clock_t sTime = clock();
    clock_t eTime;

    for (int i = 0; i < 1000000000; i++)
        ;
    eTime = clock();
    cout << sTime << " " << eTime << endl;
    cout << static_cast<double>(eTime - sTime) / CLOCKS_PER_SEC << endl;

    return 0;
}