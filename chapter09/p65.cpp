#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[12] = "watermelon";
    char b[100] = "orange";

    cout << a << endl;
    strcat(a, b);
    // dangerous!
    cout << a << endl;

    return 0;
}