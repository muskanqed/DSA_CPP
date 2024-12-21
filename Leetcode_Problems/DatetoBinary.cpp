#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// 3280 leetcode

string binaryConversion(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    return binary;
}

string dateConversion(string date)
{
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));

    string yearbinary = binaryConversion(year);
    string monthbinary = binaryConversion(month);
    string daybinary = binaryConversion(day);

    return yearbinary + "-" + monthbinary + "-" + daybinary;
}

int main()
{
    string date;
    cout << "Enter the date in YYYY-MM-DD format: ";
    cin >> date;
    string binaryDate = dateConversion(date);
    cout << "Binary representation of the date: " << binaryDate << endl;
}