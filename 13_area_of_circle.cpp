#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    double pi = 3.14159;
    double area = pi * radius * radius;
    cout << "Area of circle = " << area << endl;
    return 0;
}

