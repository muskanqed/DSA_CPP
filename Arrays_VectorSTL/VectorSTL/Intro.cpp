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
        // cout << v[i] << " ";

        // Method 2 to print a vector
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void vectorCapacitySize()
{
    vector<int> v;
    // Capacity and Size of Vector
    while (v.size() < 10)
    {
        int d;
        cout << endl
             << "Enter vector element" << endl;
        cin >> d;
        v.push_back(d);
        cout << "Capacity: " << v.capacity() << " Size: " << v.size() << endl;
    }
}

void basicVectorOps()
{

    // Vector
    // Declaring Vector
    vector<int> v;

    // Inserting in vectors
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Printing Vectors
    printVector(v);

    // Pop/Delete from vector
    // It always gets deleted from END
    v.pop_back();
    printVector(v);

    v.pop_back();
    printVector(v);
}

void inputFromUserInVector()
{
    // Taking input from user into vector
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }

    printVector(v);

    // Adding a data to vector
    for (int i = 0; i < n; i++)
    {
        v.push_back(100);
    }

    // clear or delete everything in a vector
    v.clear();
    v.push_back(90);
    printVector(v);
}

void vectorInitializationMethods()
{

    // Vector Initialization
    // Init with size then -1 that is value
    vector<int> arr(5, -1);
    // Even after init you can add the data into same vector
    arr.push_back(75);
    printVector(arr);

    // Second Method
    // vector<int> arr2 ={1,2,3,4,5};
    vector<int> arr2{1, 2, 3, 4, 5};
    printVector(arr2);

    // Copy a vector
    vector<int> arr3(arr2);
    printVector(arr3);
}

void printVectorNativeMethod(vector<char> c)
{

    // for each looop
    for (auto it : c)
    {
        cout << it << " ";
    }
}

void vectorWithDiffDataTypes()
{
    vector<char> c;
    c.push_back('a');
    c.push_back('b');
    c.push_back('c');

    cout << "Front Element: " << c[0] << endl;
    cout << "End Element: " << c[c.size() - 1] << endl;

    //  Method 2 Inbuilt
    cout << "Front Element: " << c.front() << endl;
    cout << "End Element: " << c.back() << endl;

    printVectorNativeMethod(c);
}

int main()
{
    // basicArrayOps();
    // vectorCapacitySize();
    // basicVectorOps();
    // inputFromUserInVector();
    // vectorInitializationMethods();
    vectorWithDiffDataTypes();

    return 0;
}