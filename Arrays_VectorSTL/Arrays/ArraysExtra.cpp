#include <iostream>
using namespace std;

void shiftNegativeNumbersLeftSide()
{
    int a[] = {-1, 23, 45, -6, 0, 9, 10, -23};
    int n = 8;
    int j = 0;

    for (int index = 0; index < n; index++)
    {
        if (a[index] < 0)
        {
            swap(a[index], a[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    shiftNegativeNumbersLeftSide();
    return 0;
}
