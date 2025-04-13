#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    cout << "012345678901234567890" << endl;
    string myStr = "Today is not my day.";
    string yourStr;
    string herStr;
    string hisStr;
    char ch;

    cout << myStr << endl;
    cout << "yourStr.size() = " << yourStr.size() << endl;
    cout << "myStr.size() = " << myStr.size() << endl;
    cout << "myStr.length() = " << myStr.length() << endl;
    cout << "myStr.max_size() = " << myStr.max_size() << endl;
    yourStr = myStr;
    herStr = yourStr + " operator+ overloading " + myStr;
    cout << herStr << endl;
    ch = herStr[2];
    cout << ch << endl;
    #if 0
    getline(cin, hisStr);
    cout << hisStr << endl;
    #endif
    hisStr = "abcdefghijklm";
    cout << hisStr.substr(2, 5) << endl;
    cout << hisStr.substr(2) << endl;
    cout << hisStr.find("hi") << endl;
    cout << hisStr << endl;
    myStr.insert(9, "totally ");
    cout << myStr << endl;
    myStr.replace(17, 3, "NOT");
    cout << myStr << endl;
    myStr.erase(17, 4);
    cout << myStr << endl;

    return 0;
}