#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char a[100] = "1234567890";
    char * p = strchr(a, '8');

    if(p != nullptr)
        cout << p << endl;
    if(strchr(a, 'a') == nullptr)
        cout << "!!!" << endl;
    cout << strchr(a, '4') << endl;
    cout << strchr(a, '4') - a << endl;

    return 0;
}