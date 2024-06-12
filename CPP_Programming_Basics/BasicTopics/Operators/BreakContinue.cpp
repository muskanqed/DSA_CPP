#include <iostream>
using namespace std;

int main()
{
    // Break
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
        if (i == 100)
            break;
    }

    // Continue
    for (int j = 0; j < 5; j++)

    {
        cout << "Hello" << endl;
        continue;
        cout << "Muskan" << endl;
    }

    return 0;
}