#include <iostream>
using namespace std;
int main(void)
{
    char a[100] = "abcde FGH";
    char b[100] = "abcde\0 FGH";

    cout << a << endl;
    cout << b << endl;
    
    return 0;
}