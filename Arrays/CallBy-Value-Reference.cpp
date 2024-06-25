#include <iostream>
using namespace std;

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

    return 0;
}