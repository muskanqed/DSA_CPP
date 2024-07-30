#include <iostream>
using namespace std;

// Level-01 of Searching

// Binary Search problem

// Find the Target element in sorted array
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

int main()
{
    // cout << findTarget();
    // cout << findFirstOccurence();
    // cout << findLastOccurence();
    // cout << findTotalOccurence();
    // cout << findMissingElementInSortedArrayM1();
    // cout << findMissingElementInSortedArrayM2();
    cout << peakElementInMountainArray();

    return 0;
}