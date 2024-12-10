#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryM1(int n)
{
    // Division method
    int binaryno = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }

    return binaryno;
}

int decimalToBinaryM2(int n)
{
    //  Bitwise method
    int binaryno = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = n & 1;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}

int binaryToDecimal(int n)
{
    int i = 0;
    int decimal = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n = n / 10;
    }
    return decimal;
}

int main()
{
    int n;
    cin >> n;

    // cout << decimalToBinaryM1(n) << endl;

    // cout << decimalToBinaryM2(n) << endl;

    cout << binaryToDecimal(n) << endl;
}