#include <iostream>
using namespace std;
int main(void)
{
    int score[5];

    for (int i = 0; i < 5; i++)
        cin >> score[i];
    for (int i = 0; i < 5; i++)
        cout << score[i] << " ";
    cout << endl;
    cout << score;
    
    return 0;
}