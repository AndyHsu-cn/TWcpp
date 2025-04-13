#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 0, b = 0;
    
    while(a <= 10)
    {
        while(b <= 10)
        {
            if(b == 5)
                break;
            cout << a * b << endl;
            b++;
        }
        a++;
    }
    cout << a << endl;

    return 0;
}
