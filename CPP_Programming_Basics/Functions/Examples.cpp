#include <iostream>
using namespace std;


// Find maximum of 3 numbers
void maxofNumbers(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a << " is greater" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is greater" << endl;
    }
    else
    {
        cout << c << " is greater" << endl;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter the numbers: ";
    cin >> a >> b >> c;

    maxofNumbers(a, b, c);

    return 0;
}
