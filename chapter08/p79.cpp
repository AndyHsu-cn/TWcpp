#include <iostream>
using namespace std;
int main(void)
{
    int x[3] = {1, 2, 3};

    // x[i] == *(x + i)
    for (int i = 0; i < 3; i++)
        cout << x[i] << " ";
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << *(x + i) << " ";
    cout << endl;
    
    return 0;
}