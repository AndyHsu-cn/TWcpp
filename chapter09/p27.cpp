#include <iostream>
using namespace std;
int main(void)
{
    char name[4][10] = {"John", "Mikasa", "Eren", "Armin"};

    cout << name << endl;
    cout << name[1] << endl;
    cin >> name[2];
    cout << name[2][0] << endl;

    return 0;
}