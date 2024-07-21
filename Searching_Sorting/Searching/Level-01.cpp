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
    while (start <= end) // This condition is for start == end that is size of array is 1
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

int findFirstOccurence()
{
    int arr[] = {10, 20, 30, 40, 40, 40, 50};
    int n = 7;
    int start = 0;
    int end = n - 1;
    int target = 40;
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2; // integer overflow
        // Best Pratice is below
        // int mid = start + (end - start)/2 or mid = start/2 + end/2

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
    }
    return ans;
}

int findLastOccurence()
{
    int arr[] = {10, 20, 30, 40, 40, 40, 50};
    int n = 7;
    int s = 0;
    int e = n - 1;
    int target = 40;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (target == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
    }
    return ans;
}

int findTotalOccurence()
{
    int firstOccurence = findFirstOccurence();
    int lastOccurence = findLastOccurence();
    int totalOccurence = lastOccurence - firstOccurence + 1;
    return totalOccurence;
}

int main()
{
    // cout << binarySearch();
    // cout << findFirstOccurence();
    // cout << findLastOccurence();
    cout << findTotalOccurence();
    return 0;
}