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
        static int getCount()
        {
            return count;
        }
};
int A::count = 0;

int main(void)
{
    A a1, a2, a3;

    cout << A::getCount() << endl;

    return 0;
}