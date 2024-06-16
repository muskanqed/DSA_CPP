#include <iostream>
using namespace std;

int main()
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

    return 0;
}