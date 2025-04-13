#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double income = 0.0, tax = 0.0;

    cout << "Please enter your income: ";
    cin >> income;
    if(income <= 10000)
        tax = 0.02 * income;
    else
        tax = 0.02 * 10000 + 0.08 * (income - 10000);
    
    cout << "Tax amount: $" << tax << "\n";

    return 0;
}
