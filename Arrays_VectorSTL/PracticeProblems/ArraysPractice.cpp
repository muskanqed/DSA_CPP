#include <iostream>
#include <vector>
using namespace std;

void sortNegativePostiveNumbers()
{
    int arr[] = {-7, 8, 9, 0, -2, 4, -5, 23};
    int n = 8;
    int index = 0;
    int j = 0;
    while (index < n)
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
        index++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

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
    sortNegativePostiveNumbers();
}