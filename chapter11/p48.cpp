#include <iostream>
using namespace std;
class A
{
    private:
        int i;
    public:
        A()
        {
            cout << "A" << endl;
        }
};

int main(void)
{
    A a1, a2, a3;

    cout << "===" << endl;
    A a4 = a1;
    A a5(a1);

    return 0;
}