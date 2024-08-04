#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Level-01 of Searching

// Binary Search problem

int findTarget()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 50;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int findFirstOccurence()
{
    int arr[] = {10, 20, 30, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    int start = 0;
    int end = n - 1;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int findLastOccurence()
{
    int arr[] = {10, 20, 30, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    int start = 0;
    int end = n - 1;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

// Very important question
int findTotalOccurence()
{
    int arr[] = {10, 20, 30, 30, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int totalOccurence = findLastOccurence() - findFirstOccurence() + 1;

    return totalOccurence;
}

int findMissingElementInSortedArrayM1()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    if (ans == -1)
    {
        return n + 1;
    }
    return ans + 1;
}

int findMissingElementInSortedArrayM2()
{
    int arr[] = {2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    int ans = n + 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int diff = arr[mid] - (mid + 1);

        if (diff == 0)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid + 1;
            end = mid - 1;
        }
    }

    return ans;
}

int peakElementInMountainArray()
{
    int arr[] = {10, 20, 90, 70, 60, 50, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return arr[start];
}

// Level-02 of Searching

// Binary Search Problem

int findPivotElement(vector<int> &arr, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid < end && arr[mid] > arr[mid + 1])
            return mid;
        if (mid >= start && arr[mid] < arr[mid - 1])
            return mid - 1;
        else if (arr[start] > arr[mid])
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

int search()
{
    vector<int> arr = {12, 14, 16, 2, 4, 6, 8};
    int n = arr.size();
    int target = 14;
    int ans = -1;
    int pivotIndex = findPivotElement(arr, n);

    if (target >= arr[0] && target <= arr[pivotIndex])
    {
        ans = binarySearch(arr, 0, pivotIndex, target);
    }
    else
    {
        ans = binarySearch(arr, pivotIndex + 1, n - 1, target);
    }

    cout << (ans != -1 ? "Element found " + to_string(ans) : "Element not found " + -1) << endl;
}

int main()
{
    // Level-01
    // cout << findTarget();
    // cout << findFirstOccurence();
    // cout << findLastOccurence();
    // cout << findTotalOccurence();
    // cout << findMissingElementInSortedArrayM1();
    // cout << findMissingElementInSortedArrayM2();
    // cout << peakElementInMountainArray();

    // Level-02
    search();

    return 0;
}