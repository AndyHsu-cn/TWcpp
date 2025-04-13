#include <iostream>
using namespace std;
int main(void)
{
    int a = 0, b = 0;
    char c = 0;

    do
    {
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Add? ";
        cin >> c;
    } while (c != 'Y' && c != 'y');
    cout << a + b << endl;

    return 0;
}