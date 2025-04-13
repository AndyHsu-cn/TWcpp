#include <iostream>
using namespace std;
void insertionSort(int array[], const int n);
int main(void)
{
    int a[] = {1, 3, 5, 7, 8, 6, 4, 2};

    insertionSort(a, sizeof(a) / sizeof(a[0]));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}

void insertionSort(int array[], const int n)
{
    if(n > 1)
    {
        insertionSort(array + 1, n - 1);
        int num1 = array[0];
        int i = 1;
        for (; i < n; i++)
        {
            if(array[i] < num1)
                array[i - 1] = array[i];
            else
                break;
        }
        array[i - 1] = num1;
    }
}