#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
    int x;
    int y;

    void print();
    void reflect();
};

void Point::print()
{
    cout << x << " " << y << endl;
}

void Point::reflect()
{
    int temp = x;

    x = y;
    y = temp;
}

int main(void)
{
    Point a = {10, 20};
    Point b = {5, 2};

    a.print();
    b.print();
    a.reflect();
    a.print();
    b.print();

    return 0;
}