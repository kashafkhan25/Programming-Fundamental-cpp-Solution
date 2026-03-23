#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        n = -n; // make positive
    }

    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    cout << "Sum of digits = " << sum << endl;
    return 0;
}

