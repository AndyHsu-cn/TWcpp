#include <iostream>
using namespace std;
int main(void)
{
    int y[3] = {1, 2, 3};
    int *py = y;

    for (int i = 0; i < 3; i++)
        cout << *(py + i) << " ";
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << *(py++) << " ";
    cout << endl;
    // unpredictable and dangerous!
    for (int i = 0; i < 3; i++)
        cout << *(py + i) << " ";
    cout << endl;

    return 0;
}