#include <iostream>
#include <cstring>
using namespace std;
void reverse(char p[]);
int main(void)
{
    char s[100] = "12345";

    reverse(s);
    cout << s << endl;

    return 0;
}

void reverse(char p[])
{
    size_t n = strlen(p);
    char * temp = new char[n];

    for (int i = 0; i < n; i++)
        temp[i] = p[n - i - 1];
    for (int i = 0; i < n; i++)
        p[i] = temp[i];
    
    delete [] temp;
}