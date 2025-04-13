#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(void)
{
    ifstream inFile("test.txt");
    string name;
    char c = 0;

    if(inFile)
    {
        inFile >> name;
        c = inFile.get();
        cout << c << "-";
        c = inFile.get();
        cout << c << "-";
    }
    inFile.close();

    return 0;
}