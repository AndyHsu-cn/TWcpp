#include <iostream>
using namespace std;

bool isPrime(int x);
int main(void)
{
    int n;

    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }
    cout << endl;

    return 0;
}

bool isPrime(int x)
{
    bool isPrime = true;
    
    for (int j = 2; j <= x-1; j++)
    {
        if(x % j == 0)
        {
            isPrime = false;
            break;
        }
    }
    
    return isPrime;
}