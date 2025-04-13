#include <iostream>
using namespace std;
int main(void)
{
    int sum = 0;
    int i = 0;

    while(cin >> i)
        sum += i;
    cout << sum << endl;

    return 0;
}