#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    --x; // pre-decrement
    cout << "After pre-decrement, x = " << x << endl;
    return 0;
}

