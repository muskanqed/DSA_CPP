#include <iostream>
using namespace std;

void print2DArray(int arr[][4], int rows, int cols)
{
    cout << "Printing Array" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void print2DArrayColWise(int arr[][4], int rows, int cols)
{
    cout << "Printing Array" << endl;

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void inputFromUser(int arr[][4], int row, int col)
{
    cout << "Enter Array Elements" << endl;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "Enter Array Elements" << i << " " << j;
            cin >> arr[i][j];
        }
    }
}

int main()
{
    // 2D Array
    // Creating and Initialization a Two Array
    // int a[3][4] = {{1, 2, 3, 4},
    //                {5, 6, 7, 8},
    //                {11, 12, 13, 14}};
    // int a[2][4]{{1, 2, 3, 4}, {5, 6, 7, 8}};
    int row = 3;
    int col = 4;
    int a[3][4];

    inputFromUser(a, row, col);

    print2DArray(a, row, col);
    // print2DArrayColWise(a, row, col);
    inputFromUser(a, row, col);

    // Accessing a 2D Array
    // cout << a[0][0] << endl;

    // 2D Array is also stored in the memory using continuous memory allocation
    // Formula: (NumberofCol * i) + j
    // Always specify number of col, row not needed like int arr[][4] = {{1,2,3,5},{1,2,3,10}};

    return 0;
}