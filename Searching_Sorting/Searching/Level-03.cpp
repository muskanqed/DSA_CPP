#include <iostream>

using namespace std;

int findQuotient(int dividend, int divisor)
{
    int s = 0, e = dividend;
    int ans = -1;

    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int findTargetInNeralySortedArray(int arr[], int target, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid - 1] == target)
            return mid - 1;
        if (arr[mid] == target)
            return mid;
        if (arr[mid + 1] == target)
            return mid + 1;
        else if (arr[mid] < target)
            s = mid + 2;
        else
            e = mid - 2;
    }
    return -1;
}

int main()
{
    // Division using Binary search
    /*
    int dividend = 2;
    int divisor = 0;
    int quotient = findQuotient(abs(dividend), abs(divisor));
    if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
    {
        quotient = 0 - quotient;
    }
    if (dividend == 0 || divisor == 0)
    {
        quotient = 0;
    }

    cout << "Quotient: " << quotient << endl;
    */

    // Binary Search in Nearly sorted array
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int target = 60;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = findTargetInNeralySortedArray(arr, target, n);
    if (index != -1)
    {
        cout << "Element Found: " << index << endl;
    }
    else
    {
        cout << "Element not Found" << endl;
    }

    return 0;
}