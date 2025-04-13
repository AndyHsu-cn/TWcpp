#include <iostream>
using namespace std;
int main(void)
{
    float value[10] = {0};
    float max;

    for (int i = 0; i < 10; i++)
        cin >> value[i];
    max = value[0];
    for (int i = 1; i < 10; i++)
    {
        if(value[i] > max)
            max = value[i];
    }
    cout << max << "\n";

    return 0;
}