#include <iostream>
using namespace std;
int main(void)
{   
    char c = 48;

    cout << c << " ";
    c += 10;
    cout << c << " ";
    if(c > 50)
        cout << c << endl;   
    return 0;
}