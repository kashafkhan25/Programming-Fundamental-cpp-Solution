#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int preValue = ++x; // increment first, then assign
    cout << "After pre-increment: value = " << preValue << ", x = " << x << endl;

    // reset for fair comparison
    cout << "Enter a number again: ";
    cin >> x;

    int postValue = x++; // assign first, then increment
    cout << "After post-increment: value = " << postValue << ", x = " << x << endl;

    return 0;
}

