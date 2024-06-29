#include <iostream>
using namespace std;

// Array is by default Call By Reference
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

// Printing Pairs in Array
void printPairs(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << a[i] << " " << a[j] << endl;
        }
    }
}

// Printing Triplets in Array
void printTriplets(int t[], int tlength)
{
    {
        for (int i = 0; i < tlength; i++)
        {
            for (int j = 0; j < tlength; j++)
            {
                for (int k = 0; k < tlength; k++)
                {
                    cout << t[i] << " " << t[j] << " " << t[k] << endl;
                }
            }
        }
    }
}

// Sort 0's and 1's
void sortZeroToOne(int arr[], int n)
{
    // Count all 0's and 1's
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    // Place )'s and then 1's
    int i = 0;
    for (i = 0; i < zeroCount; i++)
    {
        arr[i] = 0;
    }
    for (int j = i; j < n; j++)
    {
        arr[j] = 1;
    }

    // using while loop
    // int index = 0;
    // while(zerCount--) {
    //     arr[index] = 0;
    //     index++;
    // }

    // while(oneCount--) {
    //     arr[index] = 1;
    //     index++;
    // }
}

// Shift right all array elements by 1
void shiftArray(int shift[], int slength)
{
    int temp = shift[slength - 1];

    for (int i = slength - 1; i >= 1; i--)
    {
        shift[i] = shift[i - 1];
    }

    shift[0] = temp;
}

int main()
{
    // int arr[] = {1, 2, 3, 2, 3, 7, 7, 8, 9, 9, 1};
    // int n = 11;
    // int finalans = getUnique(arr, n);
    // cout << "The unique element is: " << finalans << endl;

    // Printing Pairs in Array
    int a[] = {10, 30, 40};
    int length = 3;
    // printPairs(a, length);

    // Printing Triplets in Array
    int t[] = {1, 2, 3};
    int tlength = 3;
    printTriplets(t, tlength);

    // Sort 0's and 1's
    // count 0's and 1's and place it in a separately array

    int count[] = {0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0};
    int clength = 12;
    sortZeroToOne(count, clength);
    // Printing array after sorting
    for (int i = 0; i < clength; i++)
    {
        cout << count[i] << " ";
    }
    cout << endl;

    // Shift right all array elements by 1
    int shift[] = {10, 20, 30, 40, 50, 60};
    int slength = 6;

    shiftArray(shift, slength);

    for (int i = 0; i < slength; i++)
    {
        cout << shift[i] << " ";
    }

    return 0;
}