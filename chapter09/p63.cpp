#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[100] = "watermelon";
    char b[100] = "orange";

    cout << a << endl;
    strcat(a, b);
    cout << a << endl;

    return 0;
}