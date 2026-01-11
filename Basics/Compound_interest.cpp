// This C++ code is to calculate compound interest using principal, rate, and time.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal;
    float rate;
    float time;
    float amount;
    float compoundInterest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;
}