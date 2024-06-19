#include <iostream>
#include <vector>
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
bool checkPrime(int num, bool printFlag)
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

// Print all the prime numbers from 1 to N
int primeNumbersUptoN(int n)
{
    cout << "Prime Number from 1 to " << n << " are ";
    for (int i = 1; i <= n; i++)
    {
        bool isPrime = checkPrime(i, false);
        if (isPrime)
        {
            cout << i << " ";
        }
    }
    return 0;
}

// Set the kth bit
void setKthBit(int n, int k)
{
    int mask = 1 << k;
    n = n | mask;

    cout << n << " is the result" << endl;

    // return n | (1 << k)(formula)
}

// Convert the temperature
void convertTemperature(double celcius)
{
    double kelvin = celcius + 273.15;
    double fahrenheit = celcius * 1.80 + 32.00;

    vector<double> answer;
    answer.push_back(kelvin);
    answer.push_back(fahrenheit);

    cout << answer.front() << endl
         << answer.back() << endl;
}

// Create Number using digits
void createNumberUsingDigits()
{
    int numberOfDigits = 0;
    int digit;
    int num = 0;
    cout << "Enter the number of digits you want to enter" << endl;
    cin >> numberOfDigits;
    for (int i = 0; i < numberOfDigits; ++i)
    {
        cout << "Enter digit: " << endl;
        cin >> digit;
        num = num * 10 + digit;
        cout << "The Number formed so far " << num << endl;
    }

    cout << endl
         << "The Final Number formed is " << num << endl;
}

// Print all digits of an Integer
void printDigitsUsingInteger()
{
    int Integer;
    cout << "Enter the Integer: " << endl;
    cin >> Integer;
    while (Integer > 0)
    {
        int Digit = Integer % 10;
        cout << "Digits are: " << Digit << endl;
        Integer = Integer / 10;
    }
}

// Conert KM to Miles
void KMToMiles()
{
    double KM;
    cout << "Enter KM: " << endl;
    cin >> KM;
    double Miles = KM * 0.621371;
    cout << "The miles is: " << Miles << endl;
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
    // checkPrime(3, 1);
    // areaCircle(5);
    // factorialofNumber(8);
    // primeNumbersUptoN(8);
    // primeNumbersUptoN(10);
    // setKthBit(15, 3);
    // convertTemperature(36.50);
    // createNumberUsingDigits();
    // printDigitsUsingInteger();
    KMToMiles();

    return 0;
}
