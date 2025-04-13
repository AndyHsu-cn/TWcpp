#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;
int main(void)
{
    cout << "   0123456789\n";
    for (int i = 30; i <= 126; i++)
    {
        if(i % 10 == 0)
            cout << setw(2) << i / 10 << " ";
        if(isprint(i))
            cout << static_cast<char>(i);
        else
            cout << " ";
        if(i % 10 == 9)
            cout << endl;
    }

    return 0;
}