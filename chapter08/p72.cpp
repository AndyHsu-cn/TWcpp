#include <iostream>
using namespace std;
void print1D(int *ar, int n);
void print(int **ar, int r);
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
    print(array, r);
    for (int i = 0; i < r; i++)
        delete [] array[i];
    delete[] array;

    return 0;
}

void print1D(int *ar, int n)
{
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}

void print(int **ar, int r)
{
    for (int i = 0; i < r; i++)
        print1D(ar[i], i + 1);
}