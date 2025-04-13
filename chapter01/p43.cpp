#include <iostream>
using namespace std;
int main(void)
{
    int num1 = 0, num2 = 0;

    cout << "Please enter two numbers, "
         << "seperated by a white space: ";
    cin >> num1 >> num2;

    while(num1 > num2)
    {
        cout << "number 1 is " << num1 << "\n";
        num1 = num1 - 1;
    }

    return 0;
}