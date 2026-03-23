#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    if (b == 0) {
        cout << "Remainder not possible (divide by zero)." << endl;
    } else {
        cout << "Remainder = " << (a % b) << endl;
    }
    return 0;
}

