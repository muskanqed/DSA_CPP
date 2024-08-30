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
    int k = 0;
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

int main()
{
    cout << findPairs();
    return 0;
}