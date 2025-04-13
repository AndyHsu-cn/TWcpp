#include <iostream>
using namespace std;
class A
{
    public:
        A() { cout << "A" << endl;}
        ~A() { cout << "~A" << endl;}
};
class B
{
    private:
        A a;
    public:
        B() { cout << "B" << endl;}
        ~B() {cout << "~B" << endl;}
};

int main(void)
{
    B b;

    return 0;
}