#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << "Number of digits = 1" << endl;
        return 0;
    }

    if (n < 0) {
        n = -n;
    }

    int count = 0;
    while (n > 0) {
        count++;
        n = n / 10;
    }

    cout << "Number of digits = " << count << endl;
    return 0;
}

