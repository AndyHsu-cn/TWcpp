#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[100] = "this is a book";
    char *p = strchr(a, ' ');
    while(p != nullptr)
    {
        *p = '_';
        p = strchr(p, ' ');
    }
    cout << a << endl;

    return 0;
}