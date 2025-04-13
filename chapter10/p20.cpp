#include <iostream>
using namespace std;
typedef double Dollar;
Dollar exchange(Dollar from, double rate);
int main(void)
{
    Dollar NT, US;

    cin >> US;
    NT = exchange(US, 29);
    cout << NT << endl;

    return 0;
}

Dollar exchange(Dollar from, double rate)
{
    return from * rate;
}