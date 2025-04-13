#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int x = 1; x <= 3; x++)
    {
        for (int y = 1; y <= 3; y++)
            cout << "(" << x << ", " << y << ") ";
        cout << "\n";
    }
    
    return 0;
}
