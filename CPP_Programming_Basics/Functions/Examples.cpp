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

// Check the Number is Even or Odd
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

    // using bitwise
    if ((num & 1) == 0)
    {
        cout << num << " Is Even Number using Bitwise" << endl;
    }
    else
    {
        cout << num << " Is Odd Number using Bitwise" << endl;
    }
}

// Find sum of 1 to N numbers
void findSumofN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Final Sum is: " << sum << endl;
}

// Find sum of even number upto N
void SumofEvenUptoN(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        // if (i % 2 == 0)
        // {
        //     sum = sum + i;
        // }
        sum = sum + i;
    }
    cout << "Sum of all Even numbers: " << sum << endl;
}

// check prime or not
bool CheckPrime(int num, bool printFlag)
{
    // divisible by one or self only.
    // not perfectly divisible by other numbers

    // method to solve
    // we will not check divisibility with self and 1
    // we will check with all the other numbers that in the range of
    // 2 to N-1,
    // where N is the number you are checking prime for,
    // 2 is to skip 1 and N-1 is to skip the number you are checking

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            if (printFlag)
            {
                cout << num << " is not a prime number" << endl;
            }
            return false;
        }
    }

    if (printFlag)
    {
        cout << num << " is a prime number" << endl;
    }
    return true;
}

// Find area of Circle
float areaCircle(int radius)
{
    float pi = 3.14;
    float area = pi * radius * radius;
    cout << area << " is the area of circle" << endl;
    return 0;
}

// Find factorial of number
void factorialofNumber(int n)
{
    int factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    cout << "The factorial is: " << factorial << endl;
}

int main()
{
    //     int a, b, c;
    //     cout << "Enter the numbers: ";
    //     cin >> a >> b >> c;
    //     maxofNumbers(a, b, c);

    // countNumbers(10);
    // checkEvenorOdd(10);
    // findSumofN(7);
    // SumofEvenUptoN(7);
    // CheckPrime(3, 1);
    // areaCircle(5);
    factorialofNumber(8);

    return 0;
}
