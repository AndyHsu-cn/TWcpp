#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[100] = "this is a book";
    char *p = strstr(a, "is");

    while (p != nullptr)
    {
        *p = 'I';
        *(p + 1) = 'S';
        p = strstr(a, "is");
    }
    cout << a << endl;

    return 0;
}