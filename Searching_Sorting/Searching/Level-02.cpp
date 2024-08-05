#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find the maximum element in a sorted and rotated array
int findPivotElement(vector<int> &arr, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid < end && arr[mid] > arr[mid + 1])
            return mid;

        if (mid > start && arr[mid] < arr[mid - 1])
            return mid - 1;

        if (arr[start] >= arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int binarySearch(vector<int> &arr, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

void search()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    int target = 3;
    int ans = -1;

    int pivotIndex = findPivotElement(arr, n);

    if (pivotIndex == -1) // array is not rotated
    {
        ans = binarySearch(arr, 0, n - 1, target);
    }
    else if (target >= arr[0] && target <= arr[pivotIndex])
    {
        ans = binarySearch(arr, 0, pivotIndex, target);
    }
    else
    {
        ans = binarySearch(arr, pivotIndex + 1, n - 1, target);
    }

    cout << (ans != -1 ? "Element found at index: " + to_string(ans) : "Element not found") << endl;
}

int findSquareRoot(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        // kya mid hi toh answer nahi
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            // ans store
            // right me jao
            ans = mid;
            s = mid + 1;
        }
        else
        {
            // left me jana h
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    search();
    return 0;
}
