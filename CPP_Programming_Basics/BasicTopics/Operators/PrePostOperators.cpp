#include <iostream>
using namespace std;

int main()
{
    // Pre/Post Increment
    int a;
    cin >> a;
    cout << ++a << endl;
    cout << a++ << endl;
    cout << a << endl;
    // cout << (++a) * (a++) << endl;
    cout << (a++) * (++a) << endl;

    // Pre/Post Decrement
    cout << --a << endl;
    cout << a-- << endl;
    cout << a << endl;
    // cout << (--a) * (a--) << endl;
    cout << (a--) * (--a) << endl;

    return 0;
}