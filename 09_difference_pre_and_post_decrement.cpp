#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int preValue = --x; // decrement first, then assign
    cout << "After pre-decrement: value = " << preValue << ", x = " << x << endl;

    // reset for fair comparison
    cout << "Enter a number again: ";
    cin >> x;

    int postValue = x--; // assign first, then decrement
    cout << "After post-decrement: value = " << postValue << ", x = " << x << endl;

    return 0;
}

