#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
    int x;
    int y;
    double distOri()
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }
};

int main(void)
{
    Point a = {3, 4};

    cout << a.distOri() << endl;

    return 0;
}