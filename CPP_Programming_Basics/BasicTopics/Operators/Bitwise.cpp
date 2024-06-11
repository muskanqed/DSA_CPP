#include <iostream>
using namespace std;

int main()
{
    // Basics of Bitwise Operators
    // int a, b;
    // cin >> a >> b;

    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (~a) << endl;
    // cout << (a ^ b) << endl;

    // // Left shift

    // int c, n;
    // cin >> c >> n;

    // cout << (c << n) << endl;

    // // Right shift

    // int d;
    // cin >> d;

    // cout << (d >> n) << endl;

    // Garbage value
    int g;
    cout << (g << -2) << endl; // Garbage value in case of Left Shift
    cout << (g >> -2);         // 0 in case of Right shift

    return 0;
}