#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Two Sum two Approaches
// Method - 01
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

// Method - 02
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

// Pivot Index two Approaches
// Very important leetcode question
// Method - 01
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

// Method - 02
int prefixSumApproach()
{
    vector<int> pivotIndex = {1, 7, 3, 6, 5, 6};
    vector<int> lsum(pivotIndex.size(), 0);
    vector<int> rsum(pivotIndex.size(), 0);
    for (int i = 1; i < pivotIndex.size(); i++)
    {
        lsum[i] = lsum[i - 1] + pivotIndex[i - 1];
    }
    for (int i = pivotIndex.size() - 2; i >= 0; i--)
    {
        rsum[i] = rsum[i + 1] + pivotIndex[i + 1];
    }

    // Starting from left most index that is 0 because we want left index
    for (int i = 0; i < pivotIndex.size(); i++)
    {
        if (lsum[i] == rsum[i])
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

    // Pivot Index two Approaches
    /*
    Method - 01 time complexity (O(n^2)) and space complexity (O(1))
    int index = pivotIndexBruteForce();
    cout << index;
    Method - 02 time complexity (O(n))
    int index = prefixSumApproach();
    cout << index;
    */

    return 0;
}