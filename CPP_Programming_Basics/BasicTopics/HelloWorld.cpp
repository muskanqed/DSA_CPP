#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!!!" << endl
         << "Hi" << '\n';
    cout << "Travel World!!!" << '\n';
    cout << "Travel World!!!" << '\n';
    // cout << endl;
    // cout << '\n';

    // int -> 4 bytes
    int num = 50;
    cout << num << endl
         << sizeof(num) << endl;

    // float -> 4 bytes
    float point = 1.233;
    cout << point << endl
         << sizeof(point) << endl;

    // char -> 1 byte
    char ch = 'M';
    cout << ch << endl
         << sizeof(ch) << endl;

    // double -> 8 bytes
    double db = 199.9;
    cout << db << endl
         << sizeof(db) << endl;

    // long -> 4 bytes
    long lg = 99;
    cout << lg << endl
         << sizeof(lg) << endl;

    // boolean -> 1 byte
    bool t = true;
    bool f = false;
    cout << t << endl
         << f << endl
         << sizeof(t) << endl
         << sizeof(f) << endl;

    // Garbage value
    int n;
    cout << n << endl;

    // Operators

    int a = 5;
    int b = 10;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << b / a << endl;
    cout << b % a << endl;

    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a != b) << endl;
    cout << (a == b) << endl;

    int age = 101;
    int car = 12;

    if (age >= 18 && car >= 1)
    {
        cout << "License miljaega" << endl;
    }

    cout << !age << endl;

    char k;
    cin >> ch;
    cout << "here: " << ch << endl;

    int marks;

    cout << "Enter the marks here: " << endl;
    // take input from user
    cin >> marks;

    cout << "Printing marks: " << marks << endl;

    return 0;
}