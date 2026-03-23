#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    cout << "Enter principal: ";
    cin >> principal;
    cout << "Enter rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double simpleInterest = (principal * rate * time) / 100.0;
    cout << "Simple Interest = " << simpleInterest << endl;
    return 0;
}

