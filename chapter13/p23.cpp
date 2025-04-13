#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ofstream myFile;

    myFile.open("tmp.txt", ios::ate);
    myFile << "12345678901234567890" << endl;
    myFile.seekp(7);
    myFile << "andy" << endl;
    myFile.close();

    return 0;
}