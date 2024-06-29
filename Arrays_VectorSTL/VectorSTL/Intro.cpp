#include <iostream>
using namespace std;

// STL is a Standard Libraay
// Vector is a dynamic array

// Static Array / Static Memory Allocation of array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    // Static Array / Static Memory Allocation of array
    // int arr[] = {1, 2, 3, 4, 5};
    // printArray(arr, 5);

    // Dynamic Array / Dynamic Memory Allocation of array
    // No values entered so it will be 0 or else garbage value

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }
    printArray(arr, n);

    return 0;
}