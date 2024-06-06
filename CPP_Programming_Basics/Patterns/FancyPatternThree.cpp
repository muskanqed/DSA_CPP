#include <iostream>
using namespace std;

int main()
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
    return 0;
}
