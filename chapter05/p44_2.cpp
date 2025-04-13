#include <iostream>
using namespace std;
int test(void);
int main(void)
{
    for (int a = 0; a < 10; a++)
        cout << test() << " ";

    return 0;
}

int test(void)
{
    static int a = 0;

    a++;
    
    return a;
}