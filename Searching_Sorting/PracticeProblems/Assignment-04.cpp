#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// K-diff pairs in an array
int findPairs()
{
    vector<int> v = {1, 1, 1, 1, 1};
    int n = v.size();
    int k = 2;
    sort(v.begin(), v.end());
    set<pair<int, int>> ans;
    int i = 0;
    int j = 1;
    while (j < n)
    {
        int diff = v[j] - v[i];
        if (diff == k)
        {
            ans.insert({v[i], v[j]});
            i++;
            j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i == j)
        {
            j++;
        }
    }
    return ans.size();
}

int binarySearch(vector<int> &nums, int start, int x)
{
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }
        else if (x > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findPairsUsingBinarySearch()
{
    vector<int> nums = {1, 1, 1, 1, 1, 1};
    int n = nums.size();
    int k = 2;
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (binarySearch(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    // for (const auto &p : ans)
    // {
    //     cout << "(" << p.first << ", " << p.second << ")" << endl;
    // }
    return ans.size();
}

int main()
{
    // Time Complexity will be O(nlogn)
    cout << findPairs() << endl;
    // Time Complexity will be O(nlogn)
    cout << findPairsUsingBinarySearch();
    return 0;
}