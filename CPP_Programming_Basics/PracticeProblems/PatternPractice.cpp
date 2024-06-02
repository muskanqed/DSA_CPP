#include <iostream>
using namespace std;

void Square()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Rectangle()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void HollowRectangle()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n + 2; col++)
        {
            if (row == 0 || row == n - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == n + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}

void HalfPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void InvertedHalfPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void NumericHalfPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << row + 1 << " ";
        }
        cout << endl;
    }
}

void InvertedNumericHalfPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << n - col << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Square();
    // Rectangle();
    // HollowRectangle();
    // HalfPyramid();
    // InvertedHalfPyramid();
    // NumericHalfPyramid();
    InvertedNumericHalfPyramid();
    return 0;
}
