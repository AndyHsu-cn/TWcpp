#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[100] = "watermelon";
    char b[100] = "orange";

    cout << a << endl;
    strcpy(a, b);
    cout << a << endl;
    cout << a + 7 << endl;

    return 0;
}