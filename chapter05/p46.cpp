#include <iostream>
using namespace std;
int aaa[1000];
int test(void);
int main(void)
{
    for (int i = 0; i < 1000; i++)
        cout << aaa[i] << " ";
    cout << endl;
    for(int a = 0; a < 10; a++)
        cout << test() << " ";
    cout << endl;
    
    return 0;
}

int test(void)
{
    static int a;

    a++;

    return a;
}