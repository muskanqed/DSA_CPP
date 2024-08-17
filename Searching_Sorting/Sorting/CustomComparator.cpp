#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void printVectorOfVector(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // This line creates a reference temp to the i-th row of the 2D vector v.
        // Each row is itself a vector of integers (vector<int>).
        // By using a reference (&), any modifications to temp would affect the original row in v, though in this function, temp is only used for reading values.
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];

        cout << a << " " << b << endl;
    }
}

bool myComp(int &a, int &b)
{
    return a > b;
}

bool myCompForVectorOfVector(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}

int main()
{
    // vector<int> v = {11, 44, 55, 33, 22};
    // sort(v.begin(), v.end(), myComp);
    // printVector(v);

    vector<vector<int>> v;
    int n;
    cout << "Enter the size" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "Enter a and b" << endl;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), myCompForVectorOfVector);

    printVectorOfVector(v);
}