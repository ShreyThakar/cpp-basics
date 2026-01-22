// This C++ program checks whether a given character is a vowel or a consonant.

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "The character is a vowel." << endl;
    }
    else {
        cout << "The character is a consonant." << endl;
    }

    return 0;
}