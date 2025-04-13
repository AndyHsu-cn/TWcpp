#include <iostream>
using namespace std;
template <typename T>
class C
{
public:
    T f(T i);
};

template <typename T>
T C<T>::f(T i)
{
    return 2 * i;
}

int main(void)
{
    C<int> c;

    cout << c.f(10) << endl;

    return 0;
}