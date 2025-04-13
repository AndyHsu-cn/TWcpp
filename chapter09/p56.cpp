#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    char a[100] = "1234";
    char b[100] = "-12.34";
    char c[100] = {0};
    char d[100] = {0};

    cout << atoi(a) * 2 << endl;
    cout << atof(b) / 2 << endl;

    return 0;
}