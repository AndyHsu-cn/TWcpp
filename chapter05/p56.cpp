#include <iostream>
using namespace std;
void shiftArray(int a[], int len);
int main(void)
{
    int num[5] = {1, 2, 3, 4, 5};
    
    shiftArray(num, 5);
    for (int i = 0; i < 5; i++)
        cout << num[i] << " ";
    cout << "\n";

    return 0;
}

void shiftArray(int a[], int len)
{
    int temp = a[0];

    for (int i = 0; i < len - 1; i++)
        a[i] = a[i+1];
    a[len - 1] = temp;
}