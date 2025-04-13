#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ifstream inFile("test.txt");
    char c;

    while(inFile.get(c))
        cout << c;
    cout << endl << endl;

    return 0;
}