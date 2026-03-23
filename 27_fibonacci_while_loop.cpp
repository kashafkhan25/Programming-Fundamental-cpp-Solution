#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms (N): ";
    cin >> n;

    int a = 0, b = 1;
    int i = 1;

    while (i <= n) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        i++;
    }
    cout << endl;
    return 0;
}

