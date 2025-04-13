#include <iostream>
using namespace std;
void print2D(int **ar, int r);
int main(void)
{
    int r = 3;
    int **array = new int *[r];

    for (int i = 0; i < r; i++)
    {
        array[i] = new int[i+1];
        for (int j = 0; j <= i; j++)
            array[i][j] = j + 1;
    }
    print2D(array, r);
    for (int i = 0; i < r; i++)
        delete [] array[i];
    delete[] array;

    return 0;
}

void print2D(int **ar, int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }
}