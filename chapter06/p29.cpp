#include <iostream>
using namespace std;
void hanoi(char from, char via, char to, int disc);
int main(void)
{
    char from = 'A', via = 'B', to = 'C';
    int disc = 0;

    cin >> disc;
    hanoi(from, via, to, disc);

    return 0;
}

void hanoi(char from, char via, char to, int disc)
{
    if(disc == 1)
        cout << "From " << from << " to " << to << endl;
    else
    {
        hanoi(from, to, via, disc - 1);
        cout << "From " << from << " to " << to << endl;
        hanoi(via, from, to, disc - 1);
    }
}

/*  pseudocode
    hanoi(from, via, to, discNum)
        if discNum == 1
            from --> to
        else
            hanoi(from, to, via, discNum - 1)
            from --> to
            hanoi(via, from, to, discNum - 1)
*/