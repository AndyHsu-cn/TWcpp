#include <iostream>
using namespace std;
struct Randomizer
{
    int a;
    int b;
    int c;
    int cur;

    int rand();
};

int Randomizer::rand()
{
    cur = (a * cur + b) % c;

    return cur;
}

int main(void)
{
    Randomizer r1 = {10, 4, 31, 0};
    Randomizer r2 = {10, 7, 32, 0};

    for (int i = 0; i < 10; i++)
        cout << r1.rand() << " ";
    cout << endl;
    for (int i = 0; i < 10; i++)
        cout << r2.rand() << " ";
    cout << endl;
    
    return 0;
}