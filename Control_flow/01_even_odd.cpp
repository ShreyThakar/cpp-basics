// This C++ code checks whether a given number is even or odd.

#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) 
    {
        cout << "Output: The number is Even." << endl;
    } 
    else 
    {
        cout << "Output: The number is Odd." << endl;
    }

    return 0;
}