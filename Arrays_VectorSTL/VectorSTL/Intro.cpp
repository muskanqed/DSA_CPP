#include <iostream>
#include <vector>
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

void basicArrayOps()
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

    // In the above cannot enter more elements then specified by user
    // Here comes the vector
}

// Printing Vector
void printVector(vector<int> v)
{
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    basicArrayOps();

    // Vector
    // Declaring Vector
    vector<int> v;

    // Inserting in vectors
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);

    // Printing Vectors
    printVector(v);
    return 0;
}