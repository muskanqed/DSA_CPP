#include <iostream>
using namespace std;

int main()
{
    // if-else Condition
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

    // next topic
    cout << endl
         << "-----------" << endl;

    // for Loop
    for (int i = 1; i < 10; i = i + 1)
    {
        cout << i << endl;
    }

    // differntiating output
    cout << endl
         << "-----------" << endl;

    for (int i = 0; i < 5; i = i + 1)
    {
        cout << "A"
             << " " << endl;
    }

    // differntiating output
    cout << endl
         << "-----------" << endl;

    for (int i = 0; i < 3; i = i + 1)
    {
        cout << endl
             << "Outer Loop " << i << endl
             << endl;
        for (int j = 0; j < 3; j = j + 1)
        {
            cout << "Inner Loop " << j << endl;
        }
    }

    // differntiating output
    cout << endl
         << "-----------" << endl;

    int i = 1;
    for (;;)
    {
        cout << "value of i is :" << i << endl;
        if (i < 5)
        {
            cout << "babbar" << endl;
            i = i + 1;
        }
        else
        {
            break;
        }
    }

    // differntiating output
    cout << endl
         << "-----------" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << 19 * i << endl;
    }

    // differntiating output
    cout << endl
         << "-----------" << endl;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}