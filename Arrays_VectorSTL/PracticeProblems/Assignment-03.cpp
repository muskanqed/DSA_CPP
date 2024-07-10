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

// Sort colors
// Method - 01: Counting Approach
void sortColorsMethod01()
{
    vector<int> sort = {0, 1, 2, 0, 0, 0, 2, 1, 1};
    int n = sort.size();
    int zeros = 0, ones = 0, twos = 0;

    for (int i = 0; i < n; i++)
    {
        if (sort[i] == 0)
            zeros++;
        else if (sort[i] == 1)
            ones++;
        else
            twos++;
    }
    int i = 0;
    while (zeros--)
    {
        sort[i] = 0;
        i++;
    }
    while (ones--)
    {
        sort[i] = 1;
        i++;
    }
    while (twos--)
    {
        sort[i] = 2;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << sort[i] << " ";
    }
}

// Method - 02: Two Pointer Approach
void sortColorsMethod02()
{
    vector<int> sort = {0, 1, 2, 0, 0, 0, 2, 1, 1};
    int n = sort.size();
    int low = 0;
    int med = 0;
    int high = n - 1;

    while (med <= high)
    {
        if (sort[med] == 0)
        {
            swap(sort[low], sort[med]);
            low++;
            med++;
        }
        else if (sort[med] == 1)
        {
            med++;
        }
        else
        {
            swap(sort[med], sort[high]);
            med++;
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << sort[i] << " ";
    }
}

// Missing Number
// Method - 01
int missingNumber0toN()
{
    vector<int> nums = {0, 1};
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i == nums[i])
            continue;
        else
            return i;
    }
    return n;
}

// Method - 02
int missingNumberUsingXOR()
{
    vector<int> nums = {0, 1};
    int n = nums.size();
    int miss = 0;

    for (int i = 0; i < n; i++)
    {
        miss ^= nums[i];
    }

    for (int i = 0; i <= n; i++)
    {
        miss ^= i;
    }
    return miss;
}

// Move Negative Number to left
// Method - 01
void negativeNumbersToLeft()
{
    vector<int> nums = {1, -9, -2, -1};
    int n = nums.size();
    int j = 0;

    for (int i = 0; i < n; i++)
    {

        if (nums[i] < 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

// Method - 02
// Using Dutch National Flag method
void negativeNumbersToLeftMethod02()
{
    vector<int> nums = {1, -9, -2, -1};
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (nums[low] < 0)
        {
            low++;
        }
        else if (nums[high] > 0)
        {
            high--;
        }
        else
        {
            swap(nums[low], nums[high]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

// Find Duplicate Number
// Method - 01
int duplicateNumber()
{
    int a[] = {3, 4, 2, 2, 1};
    int n = sizeof(a) / sizeof(int);

    sort(a, a + n);
    // Its n-1 because its i+1 which is already visited
    // while comparing so no need to revisit it as there is no number to compare after i
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            return a[i];
        }
    }
    return -1;
}

// Method - 02
int duplicateNumberUsingNegativeMarking()
{
    vector<int> nums = {3, 4, 2, 2, 1};
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0)
            return index;
        else
            nums[index] *= -1;
    }
    return 0;
}

// Method - 03
// Positioning Method
int duplicateNumberPositioningMethod()
{
    vector<int> nums = {3, 4, 2, 2, 1};
    int n = nums.size();
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }

    return nums[0];
}

// Missing Number with Duplicate
// Method - 01
void missingNumberDuplicate()
{
    vector<int> nums = {3, 4, 2, 2, 1};
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]);
        if (nums[index - 1] > 0)
            nums[index - 1] *= -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
            cout << i + 1 << " ";
    }
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

    // Sort colors
    /*
    Method - 01 time complexity (O(n)) and space (O(1))
    Not recommened
    sortColorsMethod01();
    Method - 02
    sortColorsMethod02();
    */

    // Missing Number
    /*
    Method - 01 Time complexity (nlog(n)) and space O(1)
    int miss = missingNumber0toN();
    cout << miss;
    Method - 02 Time complexity (O(n)) and space O(1)
    int miss = missingNumberUsingXOR();
    cout << miss;
    */

    // Move Negative Number to left
    /*
    Method - 01
    negativeNumbersToLeft();
    Method - 02 Time complexity (O(n)) and space O(1)
    negativeNumbersToLeftMethod02();
    */

    // Find Duplicate Number
    /*
    Method - 01 Time complexity (nlog(n)) and space O(n)
    cout << duplicateNumber();
    Method - 02 Time complexity (O(n)) and space O(1)
    cout << duplicateNumberUsingNegativeMarking();
    Method - 03 Time complexity (O(n)) and space O(1)
    cout << duplicateNumberPositioningMethod();
   */

    // Missing Number with Duplicate
    missingNumberDuplicate();

    return 0;
}