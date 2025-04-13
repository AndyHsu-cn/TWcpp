#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[100] = "1234567890";
    const char *p = "12345";

    cout << strlen(p) << " " << sizeof(p) <<endl;
    cout << strlen(a) << " " << sizeof(a) << endl;
    cout << sizeof(a + 2) << endl;

    return 0;
}