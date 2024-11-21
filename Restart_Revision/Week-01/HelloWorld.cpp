#include <iostream>
using namespace std;

// Datatypes in CPP
int dataType()
{
    // int -> 4 byte
    int num = 50;
    cout << num << endl;
    cout << sizeof(num) << endl;

    // char -> 1 byte
    char ch = 'K';
    cout << ch << endl;
    cout << sizeof(ch) << endl;

    // float -> 4 byte
    float fl = 1.68;
    cout << fl << endl;
    cout << sizeof(fl) << endl;

    // long -> 4 byte
    long lg = 18;
    cout << lg << endl;
    cout << sizeof(lg) << endl;

    // garbage value
    int gb;
    cout << gb << endl;

    return 0;
}

// Operators in CPP
// Check notes
// 1.Arithematic
// 2.Relational
// 3.Assignment
// 4.Logical
// 5.Bitwise

int main()
{
    cout << "Hello World" << " ";
    cout << endl;
    cout << '\n';
    cout << "Hello Everyone" << endl;

    dataType();

    // cin
    int marks;
    cout << "Enter your marks " << endl;
    cin >> marks;
    cout << "Your marks is below " << marks << endl;
}