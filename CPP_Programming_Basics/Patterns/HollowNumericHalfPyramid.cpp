#include <iostream>
using namespace std;

int main()
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
    return 0;
}
