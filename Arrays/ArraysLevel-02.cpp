#include <iostream>
using namespace std;

// Get the unique element from the array
int getUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 3, 7, 7, 8, 9, 9, 1};
    int n = 11;
    int finalans = getUnique(arr, n);
    cout << "The unique element is: " << finalans << endl;

    return 0;
}