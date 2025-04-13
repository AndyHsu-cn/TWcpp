#include <iostream>
using namespace std;
class MyVector
{
    private:
        int n;
        int *m;
    public:
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

    v.init(5);
    v.print();

    // will cause error for m is private
    #if 0
        delete [] v.m;
    #endif
    
    return 0;
}