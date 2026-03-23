#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    x--; // post-decrement
    cout << "After post-decrement, x = " << x << endl;
    return 0;
}

