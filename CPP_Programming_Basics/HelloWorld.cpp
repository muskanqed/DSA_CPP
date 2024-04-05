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
    bool flag = true;
    cout << flag << endl << sizeof(flag) << endl;

    
    // Garbage value
    int n;
    cout << n << endl;

    return 0;
}