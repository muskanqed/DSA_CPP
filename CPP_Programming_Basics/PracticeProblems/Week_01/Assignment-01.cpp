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

void HollowSquare()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || row == n - 1 || col == 0 || col == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void HollowInvertedHalfPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || col == 0 || col == n - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void HollowPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int k = 0;
        for (int col = 0; col < (2 * n) - 1; col++)
        {
            if (col < n - row - 1)
            {
                cout << " ";
            }
            else if (k < 2 * row + 1)
            {
                if (k == 0 || k == 2 * row || row == n - 1)
                    cout << "*";
                else
                    cout << " ";
                k++;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    // Square();
    // HollowSquare();
    // HollowPyramid();
    HollowInvertedHalfPyramid();

    return 0;
}