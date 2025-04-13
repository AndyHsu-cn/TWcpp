#include <iostream>
using namespace std;
int main(void)
{
    char c[100] = {0};

    cin >> c;
    cout << c << endl;
    cin >> c;
    cout << c << endl;
    c[5] = '*';
    cout << c << endl;

    return 0;
}