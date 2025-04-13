#include <iostream>
#include <stdexcept>
using namespace std;
class MyException : public exception
{
private:
    string m_msg;
public:
    MyException(const string &msg = "") : m_msg(msg)
    {
    }

    const char * what() const noexcept override
    {
        return m_msg.c_str();
    }
};

void f(int a[], int n)
{
    int i = 0;

    cin >> i;
    if(i < 0 || i > n)
        throw MyException("Index out of bound");
    a[i] = 1;
}

int main(void)
{
    int a[5] = {0};

    try
    {
        f(a, 5);
    }
    catch(MyException e)
    {
        cout << e.what() << endl;
    }
    
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}