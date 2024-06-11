#include <iostream>
using namespace std;

int main()
{
    // Basics of Bitwise Operators
    int a, b;
    cin >> a >> b;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (~a) << endl;
    cout << (a ^ b) << endl;

    // Left shift

    int c, n;
    cin >> c >> n;

    cout << (c << n) << endl;

    // Right shift

    int d;
    cin >> d;

    cout << (d >> n) << endl;

    return 0;
}