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
    MyVector *ptrV = new MyVector(5);
    // object pointer array
    MyVector *ptrArray[5];

    ptrV->print();
    delete ptrV;
    for (int i = 0; i < 5; i++)
        ptrArray[i] = new MyVector(i + 1);
    ptrArray[3]->print();
    for (int i = 0; i < 5; i++)
        delete ptrArray[i];

    return 0;
}