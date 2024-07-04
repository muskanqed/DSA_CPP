#include <iostream>
#include <vector>
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

int main()
{
    // shiftNegativeNumbersLeftSide();
    /*vector<int> nums = {1, 0, 0, 2, 2, 0, 0, 1, 2};
     sortColors(nums);*/
    rotateArray();
    return 0;
}
