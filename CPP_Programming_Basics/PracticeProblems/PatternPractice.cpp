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

void SolidFullPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // The inner loop written for spaces where we consider only left spaces
        for (int col = 0; col < (n - (row + 1)); col++)
        {
            cout << " ";
        }

        // This loop is for * where we consider the incremental order of *
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void SolidFullPyramidV2()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // k is declared for printing *
        int k = 0;
        for (int col = 0; col < ((2 * n) - 1); col++)
        {

            if (col < n - (row + 1))
            {
                cout << " ";
            }
            else if (k < (2 * row) + 1)
            {
                cout << "*";
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

void HollowFullPyramidV2()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int k = 0;
        for (int col = 0; col < ((2 * n) - 1); col++)
        {

            if (col < n - (row + 1))
            {
                cout << " ";
            }
            else if (k < (2 * row) + 1)
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

void InvertedSolidFullPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Diamond()
{
    int num;
    cin >> num;
    int n = num / 2;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - (row + 1); col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void HollowFullPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - (row + 1); col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row || row == n - 1)
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

void HollowInvertedFullPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || col == n - row - 1 || row == 0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void HollowDimaond()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - (row + 1); col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row)
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
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || col == n - row - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void FlippedSolidDiamond()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // Inverted Pyramid 1
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }

        // Full Pyramid

        for (int col = 0; col < (2 * row) + 1; col++)
        {
            cout << "  ";
        }

        // Inverted Pyramid 2
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {
        // Inverted Pyramid 1
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        // Full Pyramid

        for (int col = 0; col < (2 * n - 2 * row - 1); col++)
        {
            cout << "  ";
        }

        // Inverted Pyramid 2
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
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
    // InvertedNumericHalfPyramid();
    // HollowInvertedHalfPyramid();
    // SolidFullPyramid();
    // SolidFullPyramidV2();
    // HollowFullPyramidV2();
    // InvertedSolidFullPyramid();
    // Diamond();
    // HollowFullPyramid();
    // HollowInvertedFullPyramid();
    // HollowDimaond();
    FlippedSolidDiamond();

    return 0;
}
