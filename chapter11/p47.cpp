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
void f(A a1, A a2, A a3)
{
    A a4;
}
int main(void)
{
    A a1, a2, a3;

    cout << "===" << endl;
    f(a1, a2, a3);

    return 0;
}