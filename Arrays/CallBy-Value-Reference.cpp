#include <iostream>
using namespace std;

// Call by Value
int incrementBy1(int in)
{
    in = in + 1;
    return in;
}

// Call by Reference
void incrementBy1ByReference(int &ref)
{
    ref = ref + 1;
}

int main()
{
    // Reference Variable
    int n = 5;
    // creating reference Variable(similar to alias)
    int &k = n;
    int &c = k;

    // Cannot declare reference variable to constant
    // int &j = 6;

    cout << n << endl;
    cout << k << endl;
    cout << c << endl;

    k++;

    cout << n << endl;
    cout << k << endl;
    cout << c << endl;

    // Call by Value
    int in;
    cin >> in;
    // incrementBy1(in); is the case then, in is not incremented its the same
    in = incrementBy1(in);
    cout << "in: " << in << endl;

    // Call by Reference
    int ref;
    cin >> ref;
    incrementBy1ByReference(ref);
    cout << "ref: " << ref << endl;

    return 0;
}