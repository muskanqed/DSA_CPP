#include <iostream>
using namespace std;

int main()
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
    number -= n; // Reset number to the starting value of the last row
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
        number -= (2 * row - 1); // Adjust number to the starting value of the next row
    }
    return 0;
}