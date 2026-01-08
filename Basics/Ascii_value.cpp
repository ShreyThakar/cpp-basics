// This C++ code is to take a character as input and print its ASCII value.

#include <iostream>
using namespace std;

int main() {
    char character;
    int asciiValue;

    cout << "Enter a character: ";
    cin >> character;

    asciiValue = character;

    cout << "ASCII value of '" << character << "' = " << asciiValue << endl;

    return 0;
}