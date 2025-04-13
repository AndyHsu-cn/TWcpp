#include <iostream>
using namespace std;
double max(double array[], int len);
int main(void)
{
    double arr[5] = {5, 7, 2, 4, 3};

    cout << max(arr, 5) << endl;

    return 0;
}

double max(double array[], int len)
{
    if(len == 1)                // stopping condition
        return array[0];
    else                        // recursive call
    {
        double subMax = max(array, len - 1);
        if(subMax < array[len - 1])
            subMax = array[len - 1];
        return subMax;
    }
}

/*  pseudocode
    max(array, len)
        if len == 1
            return array[0]
        else
            subMax = max(array, len - 1)
            if(subMax < array(len))
                subMax = array(len)
            return subMax
*/