#include<iostream>
using namespace std;

// Function to check if a number is even or odd
void checkEvenOdd(int num){
    if(num%2==0){
        cout << num << " Number is Even" << endl;
    }
    else{
        cout <<num << " Number is odd" << endl;
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkEvenOdd(num);
}