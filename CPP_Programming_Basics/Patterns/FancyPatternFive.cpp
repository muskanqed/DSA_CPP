#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    int n;
    cin >> n;

    // Print the top half of the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number;
            number++;
            if (j < i)
            {
                cout << " * ";
            }
        }
        cout << endl;
    }

    // Print the bottom half of the pattern
    number -= n; // Reset number to the starting value of the last row
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number;
            number++;
            if (j < i)
            {
                cout << " * ";
            }
        }
        cout << endl;
        number -= (2 * i - 1); // Adjust number to the starting value of the next row
    }
    return 0;
}