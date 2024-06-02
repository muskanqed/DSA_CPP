#include <iostream>
#include <cmath>
using namespace std;

int decimalTobinaryMethod1(int n)
{
    // Division Method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {

        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
        // cout << bit << endl;
    }

    return binaryno;
}

int decimalTobinaryMethod2(int n)
{
    // Bitwise Method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
        // cout << bit << endl;
    }

    return binaryno;
}

int binaryTodecimal(int b)
{
    int decimal = 0;
    int i = 0;

    while (b)
    {
        int bit = b % 10;
        decimal = decimal + bit * pow(2, i++);
        b /= 10;
    }
    return decimal;
}

int main()
{
    int n;
    int b;
    cin >> n;
    cin >> b;
    int binary = decimalTobinaryMethod1(n);
    int binary1 = decimalTobinaryMethod2(n);
    int decimal = binaryTodecimal(b);
    cout << binary << endl
         << binary1 << endl
         << decimal << endl;
}