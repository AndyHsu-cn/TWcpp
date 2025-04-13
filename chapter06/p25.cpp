#include <iostream>
using namespace std;
int fib(int n);
double fibRepetitive(int n);
int main(void)
{
    int n;

    cin >> n;
    cout << "fib: " << fib(n) << "\n";
    cout << "fibRepetitive: " << fibRepetitive(n) << "\n";

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

double fibRepetitive(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
    {
        int fib1, fib2, fib3;
        fib1 = fib2 = 1;

        for (int i = 2; i < n; i++)
        {
            fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;   
        }

        return fib3;
    }
}

/*  pseudocode
    fibRepetitive(n)
        if n == 1 or n == 2
            return 1
        else
            for n from 3 to n
                fib2 = fib1 + fib2
                fib1 = fib2 - fib1
*/