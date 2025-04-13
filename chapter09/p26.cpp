#include <iostream>
using namespace std;
int main(void)
{
    char a[100] = {0};

    while (cin.getline(a, 100))
    {
        int i = 0;
        int spaceCount = 0;

        while (a[i] != '\0')
        {
            if(a[i] == ' ')
                spaceCount++;
            i++;
        }
        cout << spaceCount << endl;
    }

    return 0;
}