#include <iostream>
using namespace std;
int main(void)
{
    int array[100] = {0};

    for (int i = 0; i < 500; i++)
    {
        cout << array[i] << " ";
        if(i % 10 == 9)
            cout << "\n";
    }

    return 0;
}