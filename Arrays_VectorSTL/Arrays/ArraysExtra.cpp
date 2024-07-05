#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

void shiftNegativeNumbersLeftSide()
{
    int a[] = {-7, 8, 9, 0, -2, 4, -5, 23};
    int n = 8;
    int j = 0;

    for (int index = 0; index < n; index++)
    {
        if (a[index] < 0)
        {
            swap(a[index], a[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// Leetcode Problem
void sortColors(vector<int> &nums)
{
    // In-place - cannot use extra memory
    // Dutch National Flag - Problem
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int index = 0;

    while (index <= right)
    {
        if (nums[index] == 0)
        {
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if (nums[index] == 2)
        {
            swap(nums[index], nums[right]);
            right--;
        }
        else
        {
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

void rotateArray()
{
    vector<int> nums = {10, 20, 30, 40, 50};
    int n = nums.size();
    vector<int> ans(n);
    int k;
    cout << "Enter the value of k" << endl;
    cin >> k;
    for (int index = 0; index < n; index++)
    {
        // Here newIndex value will be 2 for above array
        int newIndex = (index + k) % n;
        // Now the ans[2] will be inserted with nums[0]
        ans[newIndex] = nums[index];
    }
    nums = ans;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

void missingNumbers1ToN()
{
    // AP = n/2(1+n) to get the sum of n numbers
    vector<int> nums = {0, 2, 1, 3, 4, 6};
    int n = nums.size();
    int sum = 0;
    int missingNumber;
    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
    }
    int Totalsum = (n / 2) * (1 + n);

    missingNumber = Totalsum - sum;
    cout << missingNumber;
}

void rowAndMaxOnes()
{
    vector<vector<int>> v = {{0, 1, 1, 0, 1, 0},
                             {0, 0, 1, 1, 1, 1}};
    int n = v.size();
    int oneCount = INT_MIN;
    int rowNo = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                count++;
            }
        }
        if (count > oneCount)
        {
            oneCount = count;
            rowNo = i;
        }
    }

    ans.push_back(rowNo);
    ans.push_back(oneCount);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
}

// Rotate an 2D array by 90 degree
// very important question
// Interview Question
void rotate2DArray()
{
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        // The below is used to reverse vector
        reverse(matrix[i].begin(), matrix[i].end());
        // The array is reversed using the below
        // reverse(arr,arr+n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // shiftNegativeNumbersLeftSide();
    /*vector<int> nums = {1, 0, 0, 2, 2, 0, 0, 1, 2};
     sortColors(nums);*/
    // rotateArray();
    // missingNumbers1ToN();
    // rowAndMaxOnes();
    rotate2DArray();

    return 0;
}
