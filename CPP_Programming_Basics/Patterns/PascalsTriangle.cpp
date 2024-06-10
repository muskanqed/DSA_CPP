#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        int C = 1;
        for (int col = 1; col <= row; col++)
        {
            cout << C << " ";
            C = C * (row - col) / col;
        }
        cout << endl;
    }
    return 0;
}