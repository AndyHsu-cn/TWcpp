#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
void g(string &s, int i)
{
    try
    {
        s.replace(i, 1, ".");
    }
    catch(std::out_of_range e)
    {
        cout << "...." << endl;
    }
}
int main(void)
{
    string s = "12345";
    int i = 0;

    cin >> i;
    g(s, i);
    cout << s << endl;

    return 0;
}