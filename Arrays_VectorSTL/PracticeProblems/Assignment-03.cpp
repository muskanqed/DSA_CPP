#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool twoSum()
// Also known as KeyPairs Problem
{
    int arr[] = {2, 3, 4, 5, 6, 7};
    int n = 6;
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                return true;
            }
        }
    }
    return false;
}

bool twoSum2PointerApproach()
{
    int arr[] = {1, 45, 8, 0, 2, 88};
    int n = 6;
    sort(arr, arr + n);

    int x;
    cin >> x;
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int currSum = arr[low] + arr[high];

        if (currSum == x)
            return true;
        else if (currSum > x)
            high--;
        else if (currSum < x)
            low++;
    }
    return false;
}

// Pivot Index
// Very important leetcode question

int pivotIndexBruteForce()
{
    vector<int> pivotIndex = {1, 7, 3, 6, 5, 6};
    int n = pivotIndex.size();
    for (int i = 0; i < n; i++)
    {
        int lsum = 0;
        int rsum = 0;
        for (int j = 0; j < i; j++)
        {
            lsum += pivotIndex[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            rsum += pivotIndex[j];
        }
        cout << "Index: " << i << " " << "Left Sum: " << lsum << " " << "Right Sum: " << rsum << endl;
        if (lsum == rsum)
            return i;
    }
    return -1;
}

int main()
{
    // Two Sum two Approaches
    /*
    Method - 01 not recommended to use (O(n^2))
    int ans = twoSum();
    cout << ans;
    Method - 02 recommended to use (O(nlogn))
    int ans = twoSum2PointerApproach();
    cout << ans;
    */

    int index = pivotIndexBruteForce();
    cout << index;

    return 0;
}