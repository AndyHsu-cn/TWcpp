#include <iostream>
using namespace std;
int main(void)
{
    char c = 0;

    while (cin >> c)
    {
        if(65 <= c && c <= 90)
            cout << static_cast<char>(c + 32);
        else
            cout << c;
        cout << endl;
    }

    return 0;
}