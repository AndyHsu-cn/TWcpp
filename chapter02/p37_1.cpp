#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int sum = 0;
    int i = 1;
    
    while(i <= 100)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << sum << "\n";

    return 0;
}
