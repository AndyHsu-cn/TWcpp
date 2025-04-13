#include <iostream>
using namespace std;
int main(void)
{
    for(int c = 33; c <= 126; c++)
    {
        cout << c << " ";
        char cAsChar = c;
        cout << cAsChar << "\n";
    }

    return 0;
}