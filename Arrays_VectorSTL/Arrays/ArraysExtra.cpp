#include <iostream>
#include <vector>
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

// Leetcode Problem
void sortColors()
{
    // In-place - cannot use extra memory
    // Dutch National Flag - Problem
    vector<int> a = {0, 0, 1, 0, 2, 0, 0, 0, 2, 1, 1};
    int n = 11;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    // shiftNegativeNumbersLeftSide();
    sortColors();
    return 0;
}
