#include <iostream>
using namespace std;
struct MyVector
{
    int n;
    int * m;

    void init(int dim);
    void print(void);
};

void MyVector::init(int dim)
{
    n = dim;
    m = new int[n];
    for (int i = 0; i < n; i++)
        m[i] = 0;
}

void MyVector::print(void)
{
    cout << "(";
    
    for (int i = 0; i < n - 1; i++)
        cout << m[i] << ", ";
    cout << m[n - 1] << ")" << endl;
}

int main(void)
{
    MyVector v;

    v.init(3);
    v.print();
    v.m[0] = 3;
    v.print();
    delete [] v.m; 

    return 0;
}