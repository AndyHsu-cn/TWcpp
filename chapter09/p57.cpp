#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[100] = "the";
    char b[100] = "they";
    char c[100] = "them";

    cout << strcmp(a, b) << endl;
    cout << strcmp(b, c) << " " << strncmp(b, c, 3) << endl;

    return 0;
}