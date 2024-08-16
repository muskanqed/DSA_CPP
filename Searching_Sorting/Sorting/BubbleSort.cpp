#include <iostream>
#include <vector>
using namespace std;

// Bubble sort is not used but it is building block for learning
// Swap the adjacents element till you get all the elements of the array
// Time Complexity is O(n^2)

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void bubbleSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1]) // For decreasing order v[j] < v[j+1]
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> v = {5, 4, 3, 2, 1};
    bubbleSort(v);
    printVector(v);
}