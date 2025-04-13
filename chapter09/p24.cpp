#include <iostream>
using namespace std;
int main(void)
{
    char a1[100] = {0};
    char a2[100] = {'a', 'b', ' ', 'c', '\0', 'e'};

    cin >> a1;
    cout << a1 << endl;
    cout << a2 << endl;

    return 0;
}