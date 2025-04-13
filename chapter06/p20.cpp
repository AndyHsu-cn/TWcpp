#include <iostream>
using namespace std;
int factorial(int n);
int main(void)
{
    int n;

    cin >> n;
    cout << factorial(n) << "\n";

    return 0;
}

int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return factorial(n - 1) * n;
}

/*  pseudocode
    factorial(n)
        if n == 1                       // stopping condition
            return 1
        else
            return factorial(n - 1) * n     // recursive call
*/