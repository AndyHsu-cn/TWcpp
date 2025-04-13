#include <iostream>
#include <cstdlib>
using namespace std;
class MyVector
{
    friend const MyVector operator+(const MyVector &v, double d);
    friend bool operator==(const MyVector &v1, const MyVector &v2);
    friend bool operator!=(const MyVector &v1, const MyVector &v2);
    friend bool operator<(const MyVector &v1, const MyVector &v2);
    private:
        int n;
        double *m;
    public:
        MyVector();
        MyVector(int n, double m[]);
        MyVector(const MyVector &v);
        ~MyVector();
        void print() const;
        double operator[](int index) const;
        double& operator[](int index);
        const MyVector& operator=(const MyVector &v);
        const MyVector& operator+=(const MyVector &v);
};

MyVector::MyVector()
{
    n = 0;
    m = nullptr;
}

MyVector::MyVector(int n, double m[])
{
    this->n = n;
    this->m = new double[this->n];
    for (int i = 0; i < n; i++)
        this->m[i] = m[i];
}

// deep copy
MyVector::MyVector(const MyVector &v)
{
    n = v.n;
    m = new double[n];
    for (int i = 0; i < n; i++)
        m[i] = v.m[i];
}

MyVector::~MyVector()
{
    delete [] m;
}

void MyVector::print() const
{
    cout << "(";
    for (int i = 0; i < n - 1; i++)
        cout << m[i] << ", ";
    cout << m[n - 1] << ")" << endl;
}

double MyVector::operator[](int index) const
{
    if(index < 0 || index >= n)
        exit(1);
    return m[index];
}

double& MyVector::operator[](int index)
{
    if(index < 0 || index >= n)
        exit(1);
    return m[index];
}

const MyVector& MyVector::operator=(const MyVector &v)
{
    if (this != &v)
    {
        if (this->n != v.n)
        {
            delete[] this->m;
            this->n = v.n;
            this->m = new double[n];
        }
        for (int i = 0; i < n; i++)
            this->m[i] = v[i];
    }

    return *this;
}

const MyVector& MyVector::operator+=(const MyVector &v)
{
    if(this->n == v.n)
    {
        for (int i = 0; i < n; i++)
            this->m[i] += v.m[i];
    }   

    return *this;
}

// global functions
const MyVector operator+(const MyVector &v, double d);
const MyVector operator+(double d, const MyVector &v);
const MyVector operator+(const MyVector &v1, const MyVector &v2);
bool operator==(const MyVector &v1, const MyVector &v2);
bool operator!=(const MyVector &v1, const MyVector &v2);
bool operator<(const MyVector &v1, const MyVector &v2);

bool operator<(const MyVector &v1, const MyVector &v2)
{
    if(v1.n != v2.n)
        return false;
    else
    {
        for (int i = 0; i < v1.n; i++)
        {
            if(v1[i] != v2[i])
                return false;
        }
        return true;
    }
}

bool operator!=(const MyVector &v1, const MyVector &v2)
{
    if(v1 == v2)
        return false;
    else
        return true;
}

bool operator==(const MyVector &v1, const MyVector &v2)
{
    if(v1.n != v2.n)
        return false;
    else
    {
        for (int i = 0; i < v1.n; i++)
        {
            if(v1[i] != v2[i])
                return false;
        }
    }
    return true;
}

const MyVector operator+(const MyVector &v, double d)
{
    MyVector sum(v);
    for (int i = 0; i < v.n; i++)
        sum[i] += d;
    
    return sum;
}

const MyVector operator+(double d, const MyVector &v)
{
    return v + d;
}

const MyVector operator+(const MyVector &v1, const MyVector &v2)
{
    MyVector sum(v1);

    return (sum += v2);
}

int main(void)
{
    double d1[5] = {1, 2, 3, 4, 5};
    double d2[4] = {1, 2, 3, 4};
    double d3[4] = {2, 4, 6, 8};
    MyVector a1(5, d1);
    MyVector a2(4, d2);
    MyVector a3(a1);
    a3 = a3 + 2 + a3 + 4;

    cout << (a1 != a2) << endl;
    cout << (a1 == a3) << endl;
    a3.print();
    
    return 0;
}