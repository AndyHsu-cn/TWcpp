#include <iostream>
using namespace std;
class MyVector
{
    private:
        int n;
        int *m;
    public:
        void init(void);
        void init(int dim);
        void init(int dim, int value);
        void print(void);
};

void MyVector::init(void)
{
    n = 0;
    m = nullptr;
}

void MyVector::init(int dim)
{
    init(dim, 0);
}

void MyVector::init(int dim, int value)
{
    n = dim;
    m = new int[n];
    for (int i = 0; i < n; i++)
        m[i] = value;
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

    v.init(5, 10);
    v.print(); 

    return 0;
}