#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter the numbers: " << endl;
    cin >> a >> b;
    int op;
    cout << "Which operation you want to do?: " << endl;
    cin >> op;

    // op
    // 0 -> add
    // 1 -> sub
    // 2 -> mul
    // 3 -> div
    // invalid op

    float ans = 0;

    // op is an expression which must be of integral value which means it should
    // be an int, char,short, long, long long etc no float / double not allowed

    switch (op)
    {
    case 0:
        cout << "Add case" << endl;
        ans = a + b;
        break;
    case 1:
        cout << "Sub case" << endl;
        ans = a - b;
        break;
    case 2:
        cout << "Mul case" << endl;
        ans = a * b;
        break;
    case 3:
        cout << "Div case" << endl;
        ans = a / b;
        break;

    default:
        cout << "Invaild operation" << endl;
        return 0;
    }

    cout << "Your Answer is: " << ans << endl;
    return 0;
}