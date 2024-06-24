#include <iostream>
#include <limits.h>
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

int Example()
{
    int n = 10;
    int a[10];

    // Taking the input in array
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Enter the value of index " << i << ": ";
        cin >> a[i];
        cout << endl;
    }

    // Printing double of array
    // for (int i = 0; i < n; i++)
    // {
    //     a[i] = a[i] * 2;
    //     cout << a[i] << " ";
    // }

    // Printing sum of array
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout << endl
         << "Printing the sum of array: " << sum << " ";

    return 0;
}

// Array and Functions
bool lineraSearch(int array[], int size, int search)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == search)
        {
            return true;
        }
    }
    return false;
}

// count 0's and 1's in an array
void countZeroOnes(int count[], int length)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < length; i++)
    {
        if (count[i] == 0)
        {
            zeroCount++;
        }
        else
        {
            oneCount++;
        }
    }
    cout << "Zero Count: " << zeroCount << endl;
    cout << "One Count: " << oneCount << endl;
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

    // Array Indexing:
    // access values using indexing
    int a[4] = {10, 11, 42, 93};
    cout << a[0] << " " << a[1] << " " << endl;

    // Taking input in an array and printing the same
    int n = 5;
    int arr[5];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for index: " << i << ": ";
        cin >> arr[i];
        cout << endl;
    }

    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // arr[i] is also equal to
    // value at(base address + (datatypeSize * Index))
    // above formula give address(memory location) of the index

    Example();

    // Liner Search
    // linear search in an array
    // find 3
    // flag represents value found or not
    // true - found
    // false - not found
    // convert this into a function
    int b[5] = {0, 1, 2, 3, 4};
    int target = 4;
    bool bflag = false;

    for (int i = 0; i < sizeof(b); i++)
    {
        if (b[i] == target)
        {
            bflag = 1;
            break;
        }
    }

    if (bflag == 1)
    {
        cout << endl
             << "Target found " << endl;
    }
    else
    {
        cout << endl
             << "Target not found " << endl;
    }

    // Array and Functions
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int search = 8;

    bool ans = lineraSearch(array, size, search);

    if (ans == 1)
    {
        cout << "Search found" << endl;
    }
    else
    {
        cout << "Search not found" << endl;
    }

    // count 0's and 1's in an array
    int count[] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    int length = 15;

    countZeroOnes(count, length);

    // Find the minimum value in an array
    // Requires #include limits.h INT_MAX, INT_MIN
    // Best Practice: to find minimum / maximum number initialize the varibale with int_max and int_min
    // Reason: so that it does not overflow or search beyond its limits
    int minArray[] = {10, 30, 101, 2, 1, 0};
    int minArraylength = 6;
    int minAns = INT_MAX;

    for (int i = 0; i < minArraylength; i++)
    {
        if (minArray[i] < minAns)
        {
            minAns = minArray[i];
            // minAns = min(a[i],minAns);
        }
    }
    cout << "The minimum number in Array: " << minAns << endl;

    // Reverse an array
    // Using Swap
    int revArray[] = {10, 20, 30, 40, 50, 70};
    int revArrayLength = 6;
    int left = 0;
    int right = revArrayLength - 1;

    // For odd number like 7 we use (left <= right) condition
    while (left <= right)
    {
        swap(revArray[left], revArray[right]);
        left++;
        right--;
    }
    for (int i = 0; i < revArrayLength; i++)
    {
        cout << revArray[i] << " ";
    }

    cout << endl;

    // Same can be done by using for
    // for(left=0;right=revArrayLength;left<=right,left++,right--)

    // Extreme Print in an array
    int extArray[] = {10, 20, 30, 40, 50};
    int extArrayLength = 5;
    int l = 0;
    int r = extArrayLength - 1;

    // For odd number like 7 we use (left <= right) condition
    while (l <= r)
    {
        if (l == r)
        {
            cout << extArray[l] << " ";
        }
        else
        {
            cout << extArray[l] << " ";
            cout << extArray[r] << " ";
        }
        l++;
        r--;
    }
    return 0;
}