#include <iostream>
using namespace std;

// Array is a collection of similar datatypes
// Why:
// Direct Access - Indexing
// Memory Efficiency - Continous Memory Allocation
// Ease of use - Simple Implementation

// Static Array creation: Predefined array
// int a[10];
// bool b[30];
// char alphabets[26];

void address_size_OfOperators()
{
    int a = 5;
    int arr[10];

    cout << "Address of a: " << addressof(a) << endl;
    cout << "Address of a: " << &(a) << endl;
    cout << "Size of a: " << sizeof(a) << endl;

    cout << "Address of arr: " << arr << endl;
    cout << "Size of arr: " << sizeof(arr) << endl;
}

int main()
{
    address_size_OfOperators();

    // Array Initialization
    // int a[] = {1,78,89,99};
    // int a[5]= { 1,2,3,4,5};
    // int arr[5] = {2,3};
    // Error will be thrown
    // int brr[2] = {2,3,4,5,6};

    // access values using indexing
    int a[4] = {10, 11, 42, 93};
    cout << a[0] << " " << a[1] << " " << endl;

    int n = 3;
    int arr[3];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for index " << i << endl;
        cin >> arr[i];
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }

    // linear search in an array
    // find 3
    // flag represents value found or not
    // true - found false - not found
    // convert this into a function

    int b[5] = {0, 1, 2, 3, 4};
    bool bflag = false;

    for (int i = 0; i < sizeof(b); i++)
    {
        if (b[i] == 3)
        {
            bflag = 1;
            break;
        }
    }

    if (bflag == 1)
    {
        cout << "target found " << endl;
    }
    else
    {
        cout << "target not found " << endl;
    }

    // count 0's and 1's in an array
    int c[10] = {0, 1, 2, 3, 4, 0, 1, 2, 1, 0};

    // minimum number in an array
    // requires #include limits.h INT_MAX, INT_MIN
    // best practise
    // to find minimum / maximum number initialize the varibale with int_max and int_min
    // so that it does not overflow or search beyond its limits

    // maximum number in an array

    // Reverse an array
    // left > right break

    // extreme print in an array
}