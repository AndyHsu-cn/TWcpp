#include <iostream>
using namespace std;
int main(void)
{
    int a[2][3] = {1, 1, 1, 2, 2, 2};
    int b[3][4] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3};
    int c[2][4] = {0};
       
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << c[i][j] << " ";
        cout << "\n";
    }

    return 0;
}