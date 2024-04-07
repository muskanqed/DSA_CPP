#include <iostream>
using namespace std;

int main()
{

    int num = 7;

    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    // differntiating output
    cout << endl
         << "-----------" << endl;

    int num1 = 0;

    if (num1 > 0)
    {
        cout << "Positive" << endl;
    }
    else if (num1 < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    return 0;
}