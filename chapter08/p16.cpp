#include <iostream>
using namespace std;
int main(void)
{
    int * ptr;
    int * ptr2 = nullptr;

    cout << *ptr << endl;
    cout << "value of ptr2 = " << ptr2 << endl;
    cout << "address of ptr2 = " << &ptr2 << endl;
    // run-time error!
    cout << "the variable pointed by ptr2 = " << *ptr2 << endl;

    return 0;
}