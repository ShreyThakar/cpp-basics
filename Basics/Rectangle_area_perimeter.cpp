// This C++ code is to calculate the area and perimeter of a rectangle using its length and breadth.

#include <iostream>
using namespace std;

int main() {
    float length;
    float breadth;
    float area;
    float perimeter;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area of the rectangle = " << area << endl;
    cout << "Perimeter of the rectangle = " << perimeter << endl;

    return 0;
}