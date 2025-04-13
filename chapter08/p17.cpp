#include <iostream>
using namespace std;
int main(void)
{
    int * ptrArray[10000];
    
    // run-time error!
    for (int i = 0; i < 10000; i++)
        cout << i << " " << *ptrArray[i] << endl;
    

    return 0;
}