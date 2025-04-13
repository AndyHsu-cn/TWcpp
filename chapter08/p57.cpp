#include <iostream>
using namespace std;
int main(void)
{
    for (int i = 0; ; i++)
    {
        int * ptr = new int[100000];
        
        cout << i << "\n";
    }

    return 0;
}