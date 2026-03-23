#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime" << endl;
        return 0;
    }

    bool isPrime = true;
    int i = 2;

    // check divisibility using do-while
    do {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    } while (i <= n - 1);

    if (isPrime) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    return 0;
}

