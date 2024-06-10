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

void FancyPatternOne()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 != 0)
            {
                cout << "* ";
            }
            else
            {
                cout << row + 1;
            }
        }
        cout << endl;
    }
}

void FancyPatternTwo()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < (2 * row) + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1;
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            if (col == n - row - 2)
            {
                cout << n - row - 1;
            }
            else
            {
                cout << n - row - 1 << " * ";
            }
        }
        cout << endl;
    }
}

void FancyPatternThree()
{
    int size;
    cout << "Enter Size of pattern" << endl;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (col == 0)
            {
                cout << 1;
            }
            else if (row == size - 1)
            {
                cout << col + 1;
            }
            else if (col == row + 1 && row != 0)
            {
                cout << row + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void AlphabeticalHalfPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        char ch;
        for (int col = 0; col < row + 1; col++)
        {
            ch = col + 1 + 'A' - 1;
            cout << ch;
        }

        for (char alphabet = ch; alphabet > 'A';)
        {
            alphabet = alphabet - 1;
            cout << alphabet;
        }
        cout << endl;
    }
}

void HollowInvertedNumericHalfPyramid()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0)
            {
                cout << col + 1 << " ";
            }
            else if (col == 0)
            {
                cout << row + 1 << " ";
            }
            else if (col == n - row - 1)
            {
                cout << n;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void NumericPalindromeEquilateralPyramid()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        for (int col = row - 1; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void HollowNumericHalfPyramid()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col < row + 1; col++)
        {
            if (col == 1 || col == row || row == n)
            {
                cout << col << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void SolidHalfDiamond()
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

    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void FancyPatternFour()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < (2 * n - 2 - row); col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (col == row)
            {
                cout << row + 1 << " ";
            }
            else
            {
                cout << row + 1 << " * ";
            }
        }
        for (int col = 0; col < (2 * n - 2 - row); col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void FancyPatternFive()
{
    int number = 1;
    int n;
    cin >> n;

    // Print the top half of the pattern
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << number;
            number++;
            if (col < row)
            {
                cout << " * ";
            }
        }
        cout << endl;
    }

    // Print the bottom half of the pattern
    number = number - n; // Reset number to the starting value of the last row
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << number;
            number++;
            if (col < row)
            {
                cout << " * ";
            }
        }
        cout << endl;
        number = number - (2 * row - 1); // Adjust number to the starting value of the next row
    }
}

void FancyPatternSix()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < (2 * row) + 1; col++)
        {
            if (col == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << col + 1 << " ";
            }
        }
        cout << endl;
    }
}

void FloydsTriangle()
{
    int n;
    cin >> n;
    int number = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << number << " ";
            number++;
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
    // FlippedSolidDiamond();
    // FancyPatternOne();
    // *FancyPatternTwo();
    // *FancyPatternThree();
    // AlphabeticalHalfPyramid();
    // HollowInvertedNumericHalfPyramid();
    // NumericPalindromeEquilateralPyramid();
    // HollowNumericHalfPyramid();
    // SolidHalfDiamond();
    // FancyPatternFour();
    // FancyPatternFive();
    // FancyPatternSix();
    FloydsTriangle();

    return 0;
}
