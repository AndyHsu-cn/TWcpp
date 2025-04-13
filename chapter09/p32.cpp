#include <iostream>
#include <cstring>
using namespace std;
void reverse(char s[]);
void print(char s[]);
int main(void)
{
    char s[100] = "12345";

    reverse(s + 1);
    print(s);

    return 0;
}

void reverse(char s[])
{
    int n = strlen(s);
    char temp = '\0';
    
    for (int i = 0; i < n / 2; i++)
    {
        temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}

void print(char s[])
{
    cout << s << endl;
}