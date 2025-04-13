#include <iostream>
#include <cstring>
using namespace std;
const int CNT = 4;
const int LEN = 10;
void swapName(char* n1, char* n2);
int main(void)
{
    char name[CNT][LEN] = {"John", "Mikasa", "Eren", "Armin"};

    // need at most CNT-1 times
    for (int i = 1; i < CNT; i++)
    {
        bool swapped = false;
        for (int j = 0; j < CNT - i; j++)
        {
            if(strcmp(name[j], name[j + 1]) > 0)
            {
                swapName(name[j], name[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
    
    for (int i = 0; i < CNT; i++)
        cout << name[i] << " ";
    cout << endl;

    return 0;
}

void swapName(char* n1, char* n2)
{
  char temp[LEN] = {0};

  strcpy(temp, n1);
  strcpy(n1, n2);
  strcpy(n2, temp);
}