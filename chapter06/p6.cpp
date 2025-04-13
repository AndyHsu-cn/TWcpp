#include <iostream>
using namespace std;
int main(void)
{
    int n;

    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j <= i-1; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*  pseudocode
    Given an integer n:
    for i from 2 to n
        assume that i is a prime number
        for j from 2 to i-1
            if j divides i
                set i to be a composite number
        if i is still considered as prime
            print i
*/