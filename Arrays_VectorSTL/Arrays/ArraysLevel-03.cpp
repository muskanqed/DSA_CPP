#include <iostream>
#include <limits.h>
using namespace std;

void print2DArray(int arr[][4], int row, int col)
{
    cout << "Printing Array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
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
            // i is for col, col is always second like (0,1)
            // 1 is col so i is for col so i is after j
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void inputFromUser(int arr[][4], int &row, int &col)
{
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    cout << "Enter thr number of cols: " << endl;
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value for row: " << i << " " << endl;
            cout << "Enter the value for col: " << j << " " << endl;
            cin >> arr[i][j];
        }
    }
    // Loop finished and then printed, else will enter into infinite loop
    // print2DArray(arr, row, col);
}

// Linear Search in 2D Array
bool findTargetIn2DArray(int arr[][4], int target, int rows, int cols)
{
    cin >> target;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

// Finding Maximum number
void maximumNumberIn2DArray(int arrm[][4], int rows, int cols)
{
    int maxAns = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arrm[i][j] > maxAns)
            {
                maxAns = arrm[i][j];
            }
        }
    }
    cout << "The maximum: " << maxAns << endl;
}

// Finding Minimum number
void minimumNumberIn2DArray(int arrm[][4], int rows, int cols)
{
    int minAns = INT_MAX;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arrm[i][j] < minAns)
            {
                minAns = arrm[i][j];
            }
        }
    }
    cout << "The minimum: " << minAns << endl;
}

void rowWiseSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "The sum of each row: " << i << " = " << sum << endl;
    }
}

void colWiseSum(int arr[][4], int rows, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "The sum of each col: " << i << " = " << sum << endl;
    }
}

void diagonalWiseSum()
{
    int arr[4][4] = {{-1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {11, 12, 13, 44},
                     {10, 20, 30, 40}};
    int row = 4;
    int col = 4;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + arr[i][i];
    }

    cout << "The Diagonal Sum: " << sum << endl;
}

void crossDiagonalWiseSum()
{
    int arr[4][4] = {
        {-1, 2, 3, 4},
        {5, 6, 7, 8},
        {11, 12, 13, 44},
        {10, 20, 30, 40}};
    int row = 4;
    int col = 4;
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        sum += arr[i][col - i - 1];
    }

    cout << "The sum of the anti-diagonal elements: " << sum << endl;
}

void diagonalCrossSum()
{
    int a[4][4] = {
        {10, 20, 30, 40},
        {50, 60, 7090, 80},
        {110, 2000, 30, 400909},
        {110, 2000, 30, 2},
    };

    int diaCrossSum = 0;
    int size = 4;
    // Iteration Details

    // Iteration i = 0:
    // j = 0: i == j (main diagonal), so diaCrossSum += a[0][0] → diaCrossSum = 10
    // j = 1: No condition met, so continue.
    // j = 2: No condition met, so continue.
    // j = 3: j == size - i - 1 (anti-diagonal), so diaCrossSum += a[0][3] → diaCrossSum = 10 + 40 = 50

    // Iteration i = 1:
    // j = 0: No condition met, so continue.
    // j = 1: i == j (main diagonal), so diaCrossSum += a[1][1] → diaCrossSum = 50 + 60 = 110
    // j = 2: No condition met, so continue.
    // j = 3: j == size - i - 1 (anti-diagonal), so diaCrossSum += a[1][2] → diaCrossSum = 110 + 7090 = 7200

    // Iteration i = 2:
    // j = 0: No condition met, so continue.
    // j = 1: No condition met, so continue.
    // j = 2: i == j (main diagonal), so diaCrossSum += a[2][2] → diaCrossSum = 7200 + 30 = 7230
    // j = 3: j == size - i - 1 (anti-diagonal), so diaCrossSum += a[2][1] → diaCrossSum = 7230 + 2000 = 9230

    // Iteration i = 3:
    // j = 0: j == size - i - 1 (anti-diagonal), so diaCrossSum += a[3][0] → diaCrossSum = 9230 + 110 = 9340
    // j = 1: No condition met, so continue.
    // j = 2: No condition met, so continue.
    // j = 3: i == j (main diagonal), so diaCrossSum += a[3][3] → diaCrossSum = 9340 + 2 = 9342

    // void diagonalCrossSum()
    // {
    //     int a[4][4] = {
    //         {10, 20, 30, 40},
    //         {50, 60, 7090, 80},
    //         {110, 2000, 30, 400909},
    //         {110, 2000, 30, 2},
    //     };

    //     int diaCrossSum = 0;
    //     int size = 4;
    //     for (int i = 0; i < size; i++)
    //     {
    //         for (int j = 0; j < size; j++)
    //         {
    //             if (i == j)
    //             {
    //                 diaCrossSum += a[i][j];
    //             }
    //             else if (j == size - i - 1)
    //             {
    //                 diaCrossSum += a[i][j];
    //             }
    //         }
    //     }

    //     cout << "Diagonal Cross Sum is: " << diaCrossSum << endl;
    // }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j || j == size - i - 1)
            {
                diaCrossSum += a[i][j];
            }
        }
    }

    cout << "Diagonal Cross Sum is: " << diaCrossSum << endl;
}

void transposeOfMatix()
{
    int arr[4][4] = {{-1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {11, 12, 13, 44},
                     {10, 20, 30, 40}};
    int rows = 4;
    int cols = 4;
    for (int i = 0; i < rows; i++)
    {
        // Upper triangle loop
        // for (int j = i; j < cols; j++)

        // Lower triangle loop
        for (int j = 0; j <= i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << endl;
    print2DArray(arr, rows, cols);
}

int main()
{
    // 2D Array
    // Creating and Initialization a Two Array
    // int a[3][4] = {{1, 2, 3, 4},
    //                {5, 6, 7, 8},
    //                {11, 12, 13, 14}};
    // Another Method
    // int a[2][4]{{1, 2, 3, 4}, {5, 6, 7, 8}};

    // Accessing a 2D Array
    // cout << a[0][0] << endl;

    // 2D Array is also stored in the memory using continuous memory allocation
    // Formula: (NumberofCol * i) + j
    // Always specify number of col, row not needed like int arr[][4] = {{1,2,3,5},{1,2,3,10}};

    // int a[3][4];
    // int row;
    // int col;
    // inputFromUser(a, row, col);

    // print2DArray(a, row, col);
    // print2DArrayColWise(a, row, col);

    // Linear Search in 2D Array
    // int arr[3][4] = {{1, 2, 3, 4},
    //                  {5, 6, 7, 8},
    //                  {11, 12, 13, 14}};
    // int row = 3;
    // int col = 4;
    // int target;
    // int search = findTargetIn2DArray(arr, target, row, col);
    // if (search == 1)
    // {
    //     cout << "Target Found " << endl;
    // }
    // else
    // {
    //     cout << "Target not Found " << endl;
    // }
    // int arrm[3][3];
    // int row;
    // int col;

    // Finding Minimum number
    int a[3][4] = {{-1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {11, 12, 13, 44}};
    int row = 3;
    int col = 4;

    // maximumNumberIn2DArray(a, row, col);
    // minimumNumberIn2DArray(a, row, col);
    // rowWiseSum(a, row, col);
    // colWiseSum(a, row, col);

    // diagonalWiseSum();
    // crossDiagonalWiseSum();
    // diagonalCrossSum();
    transposeOfMatix();

    return 0;
}