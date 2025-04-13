#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[15] = "watermelon";
    char b[100] = "orange";

    cout << a << endl;
    strncat(a, b, sizeof(a) - strlen(a) - 1);
    cout << a << endl;

    return 0;
}