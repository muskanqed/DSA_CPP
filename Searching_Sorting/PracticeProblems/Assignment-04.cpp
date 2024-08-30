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

//  K closet elements
void kClosetElementTwoPointerApproach()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> ans;
    int n = nums.size();
    int k = 4;
    int x = 3;
    int l = 0;
    int h = n - 1;
    while (h - l >= k)
    {
        if (x - nums[l] > nums[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    for (int i = l; i <= h; i++)
    {
        ans.push_back(nums[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    // K-diff pairs in an array: The difference of pairs selected should
    // be equal to k as well as all the pairs should be distinct
    // Time Complexity will be O(nlogn)
    // cout << findPairs() << endl;
    // cout << findPairsUsingBinarySearch();

    // K closet elements: There is an x number given
    // when x-nums[i] the difference should be close to x and we need to return k number of elements
    kClosetElementTwoPointerApproach();
    return 0;
}