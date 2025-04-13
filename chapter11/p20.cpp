#include <iostream>
using namespace std;
class MyVector
{
    private:
        int n;
        int *m;
    public:
        MyVector();
        MyVector(int dim, int value = 0);
        ~MyVector();
        void print(void);
};

MyVector::MyVector()
{
    n = 0;
    m = nullptr;
}

MyVector::MyVector(int dim, int value)
{
    n = dim;
    m = new int[n];
    for (int i = 0; i < n; i++)
        m[i] = value;
}

MyVector::~MyVector()
{
    delete [] m;
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
    MyVector v1(1);
    MyVector v2(3, 8);

    v1.print();
    v2.print();

    return 0;
}