#include <iostream>
using namespace std;
template<typename T>
void f(T t);

template<typename A, typename B>
void g(A a, B b);
int main(void)
{
    f<double>(1.2);
    f<int>(1.2);
    g<double, int>(1.2, 1.7);

    return 0;
}

template<typename T>
void f(T t)
{
    cout << t << endl;
}

template<typename A, typename B>
void g(A a, B b)
{
    cout << a + b << endl;
}