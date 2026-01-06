// This C++ code is to swap two numbers.

#include <iostream>
using namespace std;

int main() {
    int Number1;
    int Number2;
    int temp;

    cout << "Enter number 1: ";
    cin >> Number1;

    cout << "Enter number 2: ";
    cin >> Number2;

    temp = Number1;
    Number1 = Number2;
    Number2 = temp;

    cout << "After swapping:" << endl;
    cout << "Number 1 = " << Number1 << endl;
    cout << "Number 2 = " << Number2 << endl;

    return 0;
}
