#include <iostream>
#include <cstring>
using namespace std;
const int CNT = 4;
const int LEN = 10;
void swapPtr(char *& p1, char *& p2);
void swapPtr2(char **p1, char ** p2);
int main(void)
{
    char name[CNT][LEN] = {"John", "Mikasa", "Eren", "Armin"};
    char *ptr[CNT];

    for (int i = 0; i < CNT; i++)
        ptr[i] = name[i];
    for (int i = 1; i < CNT; i++)
    {
        bool swapped = false;
        for (int j = 0; j < CNT - i; j++)
        {
            if(strcmp(ptr[j], ptr[j + 1]) > 0)
            {
                swapPtr2(&ptr[j], &ptr[j+1]);
                // swapPtr(ptr[j], ptr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
    
    cout << "name 2Darray" << endl;
    for (int i = 0; i < CNT; i++)
    cout << name[i] << " ";
    cout << endl;
    cout << "ptr pointer array" << endl;
    for (int i = 0; i < CNT; i++)
        cout << ptr[i] << " ";
    cout << endl;

    return 0;
}

void swapPtr(char *& p1, char *& p2)
{
    char * temp = p1;

    p1 = p2;
    p2 = temp;
}

void swapPtr2(char **p1, char ** p2)
{
    char * temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}