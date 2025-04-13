#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int a = 1; a <= 100; a++)
    {
        if(a % 10 != 0)
            cout << a << " ";
    }    

    return 0;
}
