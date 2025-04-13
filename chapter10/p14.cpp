#include <iostream>
using namespace std;
struct Point
{
    int x;
    int y;
};
int main(void)
{
    Point a[10];
    Point *pb = new Point[20];

    cout << sizeof(Point) << " " << sizeof(a) << endl;
    cout << &a << endl;
    for (int i = 0; i < 10; i++)
        cout << &a[i] << " " << &a[i].x << " " << &a[i].y << endl;
    cout << sizeof(pb) << endl;
    delete [] pb;
    pb = nullptr;

    return 0;
}