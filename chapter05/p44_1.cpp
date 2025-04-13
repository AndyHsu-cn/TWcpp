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
    int a = 0;

    a++;
    
    return a;
}