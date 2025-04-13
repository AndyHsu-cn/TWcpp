#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i = 0, j = 0; i < 10 && j > -5; i++, j--)
        cout << i << " " << j << endl;

    return 0;
}