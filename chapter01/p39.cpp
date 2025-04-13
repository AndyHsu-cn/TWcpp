#include <iostream>
using namespace std;
int main(void)
{
    int num1 = 0, num2 = 0;

    cout << "Please enter two numbers, "
         << "seperated by a white space: ";
    cin >> num1 >> num2;

    if(num1 > num2)
        cout << "The large one is " << num1 << endl;
    if(num1 < num2)
        cout << "The large one is " << num2 << endl;
    if(num1 == num2)
        cout << "The two are equal" << endl;

    return 0;
}