#include <iostream>
#include <stdexcept>
using namespace std;
void f(int a[], int n)
{
    int i = 0;

    cin >> i;
    if(i < 0 || i > n)
        throw logic_error("Index out of bounds");
    a[i] = 1;
}
int main(void)
{
    int a[5] = {0};
    try
    {
        f(a, 5);
    }
    catch(logic_error e)
    {
        cout << e.what() << endl;
    }
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}