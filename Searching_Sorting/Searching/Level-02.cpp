#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find the maximum element in a sorted and rotated array
int findPivotElement(vector<int> &arr, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid < end && arr[mid] > arr[mid + 1])
            return mid;

        if (mid > start && arr[mid] < arr[mid - 1])
            return mid - 1;

        if (arr[start] >= arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int binarySearch(vector<int> &arr, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

void search()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    int target = 3;
    int ans = -1;

    int pivotIndex = findPivotElement(arr, n);

    if (pivotIndex == -1) // array is not rotated
    {
        ans = binarySearch(arr, 0, n - 1, target);
    }
    else if (target >= arr[0] && target <= arr[pivotIndex])
    {
        ans = binarySearch(arr, 0, pivotIndex, target);
    }
    else
    {
        ans = binarySearch(arr, pivotIndex + 1, n - 1, target);
    }

    cout << (ans != -1 ? "Element found at index: " + to_string(ans) : "Element not found") << endl;
}

// Very important
// Search Space Method: Possible answers in a range
int findSquareRoot(int x)
{
    int start = 0;
    int end = x;
    int ans = -1;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (mid * mid == x)
        {
            return x;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

// 2D Array
// To apply BS in 2D array
// 2D -> 1D => (c*i)+j
// 1D -> 2D => i = index / 2, j=index % 2
// Complexity log(m*n)
bool binarySearchIn2DArray()
{
    vector<vector<int>> matrix = {{2, 3, 4, 5},
                                  {6, 7, 8, 9},
                                  {50, 60, 80, 90}};
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row * col;
    int s = 0;
    int e = n - 1;
    int target = 80;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;
        int currNumber = matrix[rowIndex][colIndex];
        if (target == currNumber)
            return true;
        else if (target > currNumber)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return false;
}

int main()
{
    // search();

    // int x = 8;
    // int sqrt = findSquareRoot(x);
    // cout << "Square is: " << sqrt << endl;

    cout << binarySearchIn2DArray();

    return 0;
}
