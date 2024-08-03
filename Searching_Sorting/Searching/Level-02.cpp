#include <iostream>
#include <vector>
using namespace std;

// Piarrot Element
// Find Maximum Number in an Sorted and Rotated Array
int findPiarrotElememt(vector<int> &arr, int n)
{

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (start == end)
            return arr[start];
        else if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
            return arr[mid - 1];
        else if (mid + 1 < n - 1 && arr[mid] > arr[mid + 1])
            return arr[mid];
        else if (arr[start] > arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int binarySearch(vector<int> &arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return target;
        else if (target > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {12, 14, 16, 2, 4, 6, 8};
    int n = arr.size();


    return 0;
}