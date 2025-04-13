#include <iostream>
using namespace std;
int fib(int n);
int main(void)
{
    int n;

    cin >> n;
    cout << fib(n) << "\n";

    return 0;
}

int fib(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

/*  pseudocode
    fib(n)
        if(n == 1 || n == 2)
            return 1
        else
            return fib(n - 1) + fib(n - 2)
*/