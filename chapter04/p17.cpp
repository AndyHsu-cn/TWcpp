#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        float f = sqrt(i);
        cout << f << " " << f * f << endl;
    }
    

    return 0;
}