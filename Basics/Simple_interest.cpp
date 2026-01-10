// This C++ code is to calculate simple interest using principal, rate, and time.

#include <iostream>
using namespace std;

int main() {
    float principal;
    float rate;
    float time;
    float simpleInterest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}