#include <iostream>
using namespace std;

// call stack or function call stack
/*
Stack - Last in first out (LIFO)
Stack representation
a basic data structure

|_____|
|__D__| 4th in | 1st out
|__C__| 3rd in | 2nd out
|__B__| 2nd in | 3rd out
|__A__| 1st in | 4th out

similar to a LIFO Stack
the order of the operation execution for example function call represented by () is stored
in LIFO stack and the last operation in inside the stack is going to be executed first and then rest
the operation inside a function may have n number of function calls which gets stored inside the call stack
and executed in LIFO Stack order

Basic example of call stack is given in below
*/

void sumOfNumbers(int a, int b, int c)
{
    int answer = a + b + c;
    cout << "Answer is " << answer << endl;
    return; // do not send any data with return.
}

int sumByreturn(int a, int b, int c)
{
    int answer = a + b + c;
    return answer;
}

int main()
{

    // cout << "enter 3 numbers " << endl;
    sumOfNumbers(3, 5, 7);

    int sum = sumByreturn(2, 6, 9);
    cout << "Sum " << sum << endl;
    return 1;
}