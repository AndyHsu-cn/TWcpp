#include <iostream>
using namespace std;
int main(void)
{
    int exit = 0;

    while(true)
    {
        // do something
        cout << "Press 1 to exit: ";
        cin >> exit;
        if(exit == 1)
            break;
    }

    return 0;
}