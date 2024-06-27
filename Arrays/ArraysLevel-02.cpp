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

void sortZeroToOne(int arr[], int n)
{
    int zerCount = 0;
    int oneCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    int i = 0;
    for (i = 0; i < zerCount; i++)
    {
        arr[i] = 0;
    }
    for (int j = i; j < n; j++)
    {
        arr[j] = 1;
    }
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

    // sorting
    // count 0's and 1's and place it in a sep aarray

    int arr[] = {0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0};
    int nn = 12;
    sortZeroToOne(arr, nn);
    for (int i = 0; i < nn; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}