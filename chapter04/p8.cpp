#include <iostream>
using namespace std;
int main(void)
{
    short s = 0;
    long l = 0;

    cout << "int " << sizeof(int) << "\n";
    cout << "char " << sizeof(char) << "\n";
    cout << "bool " << sizeof(bool) << "\n";
    cout << "short int " << sizeof(s) << "\n";
    cout << "long int " << sizeof(l) << "\n";
    cout << "unsigned short int " << sizeof(unsigned short) << "\n";
    cout << "unsigned int " << sizeof(unsigned int) << "\n";
    cout << "unsigned long int " << sizeof(unsigned long int) << "\n";
 
    return 0;
}