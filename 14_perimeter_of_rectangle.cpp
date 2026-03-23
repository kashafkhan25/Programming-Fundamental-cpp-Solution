#include <iostream>
using namespace std;

int main() {
    double length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    double perimeter = 2 * (length + width);
    cout << "Perimeter of rectangle = " << perimeter << endl;
    return 0;
}

