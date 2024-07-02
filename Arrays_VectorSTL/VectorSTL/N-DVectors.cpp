#include <iostream>
#include <vector>
using namespace std;

void print2DVector(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // 2D Vectors
    // Declaration and Init
    vector<vector<int>> arr(5, vector<int>(10, 0));
    // print2DVector(arr);

    // Jagged Array
    // Meaning two array with different number of cols
    vector<vector<int>> brr;

    vector<int> vect1(2, 1);
    vector<int> vect2(3, 0);
    vector<int> vect3(5, 3);

    brr.push_back(vect1);
    brr.push_back(vect2);
    brr.push_back(vect3);

    print2DVector(brr);

    return 0;
}