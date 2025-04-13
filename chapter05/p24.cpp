#include <iostream>
using namespace std;
int test (int);

int main()
{
  cout << test(-1); 
  return 0;
}	

// control reaches end of non-void function, DO NOT DO LIKE THIS AGAIN
int test (int a)
{
  if (a > 0)
    return 5;
}