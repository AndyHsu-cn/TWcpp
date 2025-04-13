#include <iostream>
using namespace std;
class A
{
protected:
    int x;
public:
    virtual void print()
    {
        cout << "A" << endl;
    }
};
class B : public A
{
protected:
    int y;
public:
    void print()
    {
        cout << "B" << endl;
    }
};
int main(void)
{
    A a;
    B b;
    A c = b;
    A *pa = &b;

    a.print();
    b.print();
    c.print();
    pa->print();

    return 0;
}