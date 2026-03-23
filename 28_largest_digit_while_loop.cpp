#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    int largest = 0;
    if (n == 0) {
        largest = 0;
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit > largest) {
            largest = digit;
        }
        n = n / 10;
    }

    cout << "Largest digit = " << largest << endl;
    return 0;
}

