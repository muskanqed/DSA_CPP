#include <iostream>
using namespace std;

int binarySearch()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 100;
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return arr[mid];
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // update mid
        mid = (start + end) / 2;
    }
    return false;
}

int main()
{
    cout << binarySearch();
    return 0;
}