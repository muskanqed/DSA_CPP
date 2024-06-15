#include <iostream>
using namespace std;

// Function Declaration
void printGreetings();

int printMessage(string userName)
{
    cout << "Hello " << userName << endl;
    return 0;
}

int main()
{
    // Function Call
    printGreetings();
    printMessage("Muskan");
    return 1;
}

// Function Defination
void printGreetings()
{
    cout << "Greetings" << endl;
}