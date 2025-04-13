#include <iostream>
using namespace std;
class A
{
    private:
        static int count;
    public:
        A()
        {
            count++;
        }
        ~A()
        {
            count--;
        }
        static int getCount()
        {
            return count;
        }
};
int A::count = 0;

int main(void)
{
    A a1, a2;
    
    cout << A::getCount() << endl;
    if(true)
    {
        A a3;
        cout << A::getCount() << endl;
    }
    cout << A::getCount() << endl;

    return 0;
}