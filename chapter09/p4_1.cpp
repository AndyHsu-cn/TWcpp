#include <iostream>
using namespace std;
int main(void)
{
    char c = '0';

    cout << static_cast<int>(c) << " ";
    c = 'A';
    cout << static_cast<int>(c) << " ";
    c = '\n';
    cout << static_cast<int>(c) << endl;

    return 0;
}