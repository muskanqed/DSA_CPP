#include <iostream>
using namespace std;

// If-Else Statement
// Function to check if a number is even or odd
void checkEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " Number is Even" << endl;
    }
    else
    {
        cout << num << " Number is odd" << endl;
    }
}

// For Loop
void understandingForLoop()
{
    for (int i = 0; i < 3; i++)
    {
        cout << endl
             << "Outer Loop: " << i << endl
             << endl;

        for (int j = 0; j < 3; j++)
        {
            cout << "Inner Loop: " << j << endl;
        }
    }
}

// Another method for for loop
void anotherMethodForLoop()
{
    int i = 0;
    for (;;)
    {
        if (i < 3)
        {
            cout << "Hello world" << endl;
            i = i + 1;
        }
        else
        {
            break;
        }
    }
}

// Examples for for loop
void ninetable()
{
    for (int i = 1; i <= 9; i++)
    {
        cout << "9 * " << i << " =" << 9 * i << endl;
    }
}

void evenNumbersFrom1to100()
{
    for (int i = 2; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // checkEvenOdd(num);

    // understandingForLoop();
    // anotherMethodForLoop();

    // ninetable();
    evenNumbersFrom1to100();
}