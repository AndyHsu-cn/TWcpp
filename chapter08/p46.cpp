#include <iostream>
using namespace std;
double fibRepetitive(int n);
int main(void)
{
    int n;

    cin >> n;
    cout << fibRepetitive(n) << endl;

    return 0;
}

double fibRepetitive(int n)
{
    double result = 0;

    if(n == 1 || n == 2)
        result = 1.0;
    else
    {
        double * pfib = new double[n];
        pfib[0] = pfib[1] = 1.0;
        for (int i = 2; i < n; i++)
            pfib[i] = pfib[i - 1] + pfib[i - 2];
        result = pfib[n - 1];
        delete [] pfib;
    }

    return result;
}