#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int array[100] = {0};
    
    for (int i = 0; i < 100; i++)
    {
        cout << array[i] << " ";
        if(i % 10 == 9)
            cout << "\n";
    }

    return 0;
}