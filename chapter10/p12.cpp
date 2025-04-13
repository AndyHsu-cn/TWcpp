#include <iostream>
using namespace std;
struct Point
{
    int x;
    int y;
};
void reflect(Point & a);
int main(void)
{
    Point a = {10, 20};

    cout << a.x << " " << a.y << endl;
    reflect(a);
    cout << a.x << " " << a.y << endl;

    return 0;
}

void reflect(Point & a)
{
    int temp;

    temp = a.x;
    a.x = a.y;
    a.y = temp;
}