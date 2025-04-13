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
        MyVector(int dim, int v[]);
        ~MyVector();
        void print(void);
        int getN();
        int getM(int index);
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

MyVector::MyVector(int dim, int v[])
{
    n = dim;
    m = new int[n];

    for (int i = 0; i < n; i++)
        m[i] = v[i];
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

int MyVector::getN()
{
    return n;
}

int MyVector::getM(int index)
{
    return m[index];
}

MyVector sum(MyVector &v1, MyVector &v2, MyVector &v3)
{
    // assume that their dimensions are identical
    int n = v1.getN();
    int *sov = new int[n];
    for (int i = 0; i < n; i++)
        sov[i] = v1.getM(i) + v2.getM(i) + v3.getM(i);
    MyVector sumOfVec(n, sov);
    
    return sumOfVec;
}

MyVector sum2(MyVector *pv1, MyVector *pv2, MyVector *pv3)
{
    // assume that their dimensions are identical
    int n = pv1->getN();
    int *sov = new int[n];
    for (int i = 0; i < n; i++)
        sov[i] = pv1->getM(i) + pv2->getM(i) + pv3->getM(i);
    MyVector sumOfVec(n, sov);
    
    return sumOfVec;
}

int main(void)
{
    MyVector v1(5, 1);
    MyVector v2(5, 2);
    MyVector v3(5, 3);
    MyVector sumV = sum2(&v1, &v2, &v3);

    v1.print();
    sumV.print();

    return 0;
}