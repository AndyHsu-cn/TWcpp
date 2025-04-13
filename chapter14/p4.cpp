#include <iostream>
#include <cstdlib>
using namespace std;
class MyVector
{
    friend const MyVector operator+(const MyVector &v, double d);
    friend bool operator==(const MyVector &v1, const MyVector &v2);
    friend bool operator!=(const MyVector &v1, const MyVector &v2);
    friend bool operator<(const MyVector &v1, const MyVector &v2);
    protected:
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
    cout << "MyVector() called" << endl;
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
    cout << "MyVector(const MyVector &v) called" << endl;
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
// end of definition of MyVector


class MyVector2D : public MyVector
{
    public:
        MyVector2D();
        MyVector2D(double m[]);
        //MyVector2D(const MyVector2D &v);
        void setValue(double i1, double i2);
        void print() const;
};

MyVector2D::MyVector2D()
{
    this->n = 2;
}

MyVector2D::MyVector2D(double m[]) : MyVector(2, m)
{
}
#if 0
MyVector2D::MyVector2D(const MyVector2D &v)
{
    cout << "MyVector2D(const MyVector2D & v) called" << endl;
}
#endif

void MyVector2D::setValue(double i1, double i2)
{
    if(this->m == nullptr)
        this->m = new double[2];
    this->m[0] = i1;
    (*this)[1] = i2;
}

void MyVector2D::print() const
{
    cout << "2D: ";
    MyVector::print();
}
// end of definition of MyVector2D

class NNVector2D : public MyVector2D
{
    public:
        NNVector2D();
        NNVector2D(double m[]);
        void setValue(double i1, double i2);
};

NNVector2D::NNVector2D()
{
}

NNVector2D::NNVector2D(double m[]) : MyVector2D(m)
{
    if(m[0] < 0)
        m[0] = 0;
    if(m[1] < 0)
        m[1] = 0;
}

void NNVector2D::setValue(double i1, double i2)
{
    if(this->m == nullptr)
        this->m = new double[2];
        this->m[0] = i1 >= 0? i1: 0;
        this->m[1] = i2 >= 0? i2: 0;
}
// end of definition of NNVector2D

int main(void)
{
    double i[2] = {1, 2};
    MyVector2D u(i);
    MyVector v(u);

    u.print();
    v.print();
    cout << (v == u) << endl;

    return 0;
}