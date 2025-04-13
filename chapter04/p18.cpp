#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void)
{
    int bad = 0;

    for (int i = 0; i < 100; i++)
    {
        float f = sqrt(i);
        cout << setprecision(10) << f << " " << f * f << " ";
        if(f * f != i)
        {
            cout << "!!!";
            bad++;
        }
        cout << endl;
    }
    cout << "bad precision: " << bad << endl; 

    return 0;
}