#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <set>
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
// Method - 01 Negative Marking
void missingNumberDuplicate()
{
    vector<int> nums = {3, 4, 2, 2, 1};
    int n = nums.size();
    for (int i = 0; i < n; i++)
    { // if nums[i] is negative then we take abs value of nums[i]
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

// Method - 02 Sorting and swapping
void missingNumberDuplicateSAndS()
{
    vector<int> nums = {3, 4, 2, 2, 1};
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        int index = nums[i] - 1;
        if (nums[i] != nums[index])
        {
            swap(nums[i], nums[index]);
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
}

// First Repeating Element
// Method - 01
int firstRepeatingElement()
{
    int a[] = {1, 5, 3, 2, 5, 4};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        bool isRepeated = false;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                isRepeated = true;
                return a[i];
            }
        }
    }
    return -1;
}

// Method - 01
int firstRepeatingElementUsingHash()
{
    int a[] = {1, 2, 3, 3, 5, 4};
    int n = 6;
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[a[i]] > 1)
            return i + 1;
    }
    return -1;
}

// Common Elements in 3 sorted array
void commonElementInSortedArray()
{
    int a[] = {1, 2, 3, 10, 20, 30};
    int b[] = {10, 20, 30, 40, 50, 60, 70};
    int c[] = {1, 2, 10, 20, 30};
    int n1 = sizeof(a) / sizeof(int);
    int n2 = sizeof(b) / sizeof(int);
    int n3 = sizeof(c) / sizeof(int);

    int i, j, k;
    i = j = k = 0;
    vector<int> v;
    set<int> st;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            st.insert(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto i : st)
    {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Print Wave like Matrix
void wavePrintMatrix()
{
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int row = v.size();
    int col = v[0].size(); // count of 1 row columns will give the size of conlumns

    for (int startcol = 0; startcol < col; startcol++)
    {
        if ((startcol & 1) == 0) // Bracket is important here while bitwise & operation
        {
            for (int i = 0; i < row; i++)
            {
                cout << v[i][startcol] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << v[i][startcol] << " ";
            }
        }
    }
}

// Spiral Print of a Matrix
void spiralMatrix()
{
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    vector<int> ans;
    int rows = v.size();
    int cols = v[0].size();
    int totalElements = rows * cols;

    int startingRow = 0;
    int endingCol = cols - 1;
    int endingRow = rows - 1;
    int startingCol = 0;

    int count = 0;

    while (count < totalElements)
    {
        // print starting row
        for (int i = startingCol; i <= endingCol && count < totalElements; i++)
        {
            ans.push_back(v[startingRow][i]);
            count++;
            // if(count >= totalElements) {
            //   break;
            // }
        }
        startingRow++;

        // print ending col
        for (int i = startingRow; i <= endingRow && count < totalElements; i++)
        {
            ans.push_back(v[i][endingCol]);
            count++;
        }
        endingCol--;

        // print ending row
        for (int i = endingCol; i >= startingCol && count < totalElements; i--)
        {
            ans.push_back(v[endingRow][i]);
            count++;
        }
        endingRow--;

        // print starting col
        for (int i = endingRow; i >= startingRow && count < totalElements; i--)
        {
            ans.push_back(v[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

// Add two array
void addTwoArray()
{
    vector<int> A = {10, 20, 30, 40};
    vector<int> B = {2, 2, 7};
    int n = A.size();
    int m = B.size();
    int carry = 0;
    string ans;
    int i = n - 1;
    int j = m - 1;
    while (i >= 0 && j >= 0)
    {
        int x = A[i] + B[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
        j--;
    }
    while (i >= 0)
    {
        int x = A[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }
    while (j >= 0)
    {
        int x = 0 + B[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }
    if (carry)
    {
        ans.push_back(carry + '0');
    }

    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());

    cout << ans;
}

// Factorial of large Number
void factorialLargeNumber()
{
    int N = 5;
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }
        if (carry)
        {
            ans.push_back(carry);
        }
        carry = 0;
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}

void duplicateNumberFromSortedArray()
{
    vector<int> dup = {0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 4};
    int n = dup.size();
    // Two Pointers approach
    int i = 1;
    int j = 0;
    while (i < n)
    {
        if (dup[i] == dup[j])
        {
            i++;
        }
        else
        {
            // j++;
            // dup[j] = dup[i];
            // i++;
            dup[++j] = dup[i++];
        }
    }
    // while(j--)
    for (int k = 0; k <= j; k++)
    {
        cout << dup[k] << " ";
    }
}

// Maximum average of subarray of given length k
// Method - 01 Brute Force
double maximumAvgOfSubarrayM1()
{
    vector<int> nums = {1, -2, 15, 50, 51, 44};
    int k = 4;
    int i = 0;
    int j = k - 1;
    int maxSum = INT_MIN;
    while (j < nums.size())
    {
        int sum = 0;
        for (int y = i; y <= j; y++)
        {
            sum += nums[y];
        }
        maxSum = max(maxSum, sum);
        j++;
        i++;
    }
    double maxAvg = maxSum / (double)k;
    return maxAvg;
}

// Method - 02
// Using Sliding window Method
double maximumAvgOfSubarrayM2()
{
    vector<int> nums = {1, 2, 8, 9, 10, -99, 100, 110};
    int n = nums.size();
    int k = 3;
    int i = 0;
    int j = k - 1;
    int sum = 0;

    for (int y = i; y <= j; y++)
    {
        sum += nums[y];
    }
    int maxSum = sum;
    j++;
    while (j < n)
    {
        sum -= nums[i++];
        sum += nums[j++];
        maxSum = max(maxSum, sum);
    }
    double maxAvg = maxSum / (double)k;
    return maxAvg;
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
    /*
    Method - 01 Negative Marking
    missingNumberDuplicate();
    Method - 02 Sorting and swapping
    missingNumberDuplicateSAndS();
    */

    // First Repeating Element
    /*
    Method - 01 time complexity (O(n^2)) and space complexity (O(1))
    cout << firstRepeatingElement();
    Method - 02 Time complexity (O(n)) and space O(n)
    cout << firstRepeatingElementUsingHash();
    */

    // Common Elements in 3 sorted array
    /*
    Expected Time Complexity: 0(n1 + n2 + n3)
    Expected Auxiliary Space: 0(n1 + n2 + n3)
    commonElementInSortedArray();
    */

    // Print Wave like Matrix
    // wavePrintMatrix();

    // Spiral Print of a Matrix
    // spiralMatrix();

    // Add two array
    // addTwoArray();

    // Factorial of large Number
    // factorialLargeNumber();

    // Remove Duplicates from sorted array
    // duplicateNumberFromSortedArray();

    // Maximum average of subarray of given length k
    /*
    Method - 01  time complexity (O(n^2)) and space complexity (O(1))
    cout << maximumAvgOfSubarrayM1() << endl;
    Method - 02 time complexity (O(n)) and sapce complexity (O(1))
    cout << maximumAvgOfSubarrayM2();;
    */

    return 0;
}