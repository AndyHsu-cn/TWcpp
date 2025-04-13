#include <iostream>
#include <cstring>
using namespace std;
const int CNT = 100;
const int WORD_LEN = 50;
const int SEN_LEN = 1000;
int main(void)
{
    char url[SEN_LEN];
    char delim[] = "./";
    char *start;
    char word[CNT][WORD_LEN] = {0};
    int wordCnt = 0;

    cin >> url;
    start = strtok(url, delim);
    while (start != nullptr)
    {
        strcpy(word[wordCnt], start);
        wordCnt++;
        start = strtok(nullptr, delim);
    }
    for (int i = 0; i < wordCnt; i++)
        cout << word[i] << " ";
    cout << endl << wordCnt << endl;

    return 0;
}