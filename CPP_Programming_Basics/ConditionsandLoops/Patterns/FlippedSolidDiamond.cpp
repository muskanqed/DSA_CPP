#include <iostream>
using namespace std;

int main()
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

    return 0;
}