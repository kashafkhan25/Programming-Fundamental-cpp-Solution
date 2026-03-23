#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "Multiplication = " << (a * b) << endl;

    if (b == 0) {
        cout << "Division not possible (divide by zero)." << endl;
    } else {
        cout << "Division = " << (a / b) << endl;
    }
    return 0;
}

