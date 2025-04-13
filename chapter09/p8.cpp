#include <iostream>
#include <cctype>
using namespace std;
int main(void)
{
    char c = 0;

    while (cin >> c)
        cout << static_cast<char>(tolower(c)) << endl;

    return 0;
}