#include <iostream>
using namespace std;

int main() {
    int i = 1; // Initialize i outside the loop

    for(;;) {
        if(i < 5) {
            cout << "muskan" << endl;
            i = i + 1;
        } else {
            break;
        }
    }

    return 0;
}
