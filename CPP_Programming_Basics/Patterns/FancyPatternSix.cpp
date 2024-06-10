#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        int k = 1;
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << k << " ";
                k++;
            }
        }

        for (int col = k - 2; col >= 0; col--)
        {
            if (col == 1)
            {
                cout << col << " ";
            }
            else if (col == 0)
            {
                cout << "*";
            }
            else
            {
                cout << col << " ";
            }
        }
        cout << endl;
    }

    for (int row = 0; row < n - 1; row++)
    {
        int k = 1;
        for (int col = 0; col < n - row - 1; col++)
        {
            if (col == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << k << " ";
                k++;
            }
        }

        for (int col = k - 2; col >= 0; col--)
        {
            if (col == 1)
            {
                cout << col << " ";
            }
            else if (col == 0)
            {
                cout << "*";
            }
            else
            {
                cout << col << " ";
            }
        }
        cout << endl;
    }

    return 0;
}