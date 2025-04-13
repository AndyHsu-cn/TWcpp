#include <iostream>
using namespace std;
void vector(int x1, int y1, int x2, int y2, int &rx, int &ry);
int main(void)
{
    int x1 = 0, x2 = 0;
    int y1 = 10, y2 = 20;
    int rx = 0, ry = 0;

    vector(x1, y1, x2, y2, rx, ry);
    cout << rx << " " << ry << endl;

    return 0;
}

void vector(int x1, int y1, int x2, int y2, int &rx, int &ry)
{
    rx = x2 - x1;
    ry = y2 - y1;
}