#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "Sum of first " << n << " natural numbers = " << sum << endl;
    return 0;
}

