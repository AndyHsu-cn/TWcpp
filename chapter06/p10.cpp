#include <iostream>
using namespace std;
const int MAX_LEN = 10000;
int main(void)
{
    int n = 0;
    bool isPrime[MAX_LEN + 1] = {false};

    for (int i = 2; i <= MAX_LEN; i++)
        isPrime[i] = true;
    
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if(isPrime[i] == true)
        {
            for (int j = 2; i * j <= n; j++)
                isPrime[i * j] = false;
        }
    }
    
    for (int i = 2; i <= n; i++)
    {
        if(isPrime[i] == true)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*  pseudocode
    Given a Boolean array A of length n+1
    // assuming prime
    Initialize all elements in A to be true 
    for i from 2 to n
    if A[i] is true
        // eliminating composite numbers
        for j from 2 to [n / i]     
            Set A[i*j] to false
*/