#include <iostream>
using namespace std;
int main(void)
{
    int a[2][3];
    
    cout << a << " " << a[0] << "\n";
    cout << a[1] << " " << a + 1 << "\n";
    cout << sizeof(a) << " " << sizeof(a[0]) << "\n";

    return 0;
}