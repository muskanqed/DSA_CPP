#include <iostream>
using namespace std;

// Find maximum of 3 numbers
void maxofNumbers(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        cout << " Maximum is: " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << " Maximum is: " << b << endl;
    }
    else
    {
        cout << " Maximum is: " << c << endl;
    }

    // using inbuilt
    int ans = max(a, b); // max only takes 2 inputs
    int finalAns = max(ans, c);
    cout << " Maximum using inbuit function is: " << finalAns << endl;
}

// Counting Number from 1 to N
void countNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

void checkEvenorOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << "The number is Even" << endl;
    }
    else
    {
        cout << "The number is Odd" << endl;
    }
}

int main()
{
    //     int a, b, c;
    //     cout << "Enter the numbers: ";
    //     cin >> a >> b >> c;
    //     maxofNumbers(a, b, c);

    // countNumbers(10);
    checkEvenorOdd(10);

    return 0;
}
