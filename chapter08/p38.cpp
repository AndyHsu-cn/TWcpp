#include <iostream>
using namespace std;
int * firstNeg(int a[], int n);
int main(void)
{
    int a[5] = {0};
    int *p;

    for (int i = 0; i < 5; i++)
        cin >> a[i];
    p = firstNeg(a, 5);
    if(p != nullptr)
        cout << *p << " " << (p - a) << endl;   // (p -a) = index
    else
        cout << "null pointer" << endl;

    return 0;
}

int * firstNeg(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if(a[i] < 0)
            return &a[i];
    // if a[i] >= 0 for all i
    return nullptr;
}