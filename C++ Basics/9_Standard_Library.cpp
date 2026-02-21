#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double result = floor(1.2); // Rounds down to the nearest integer
    cout << result;

    double result2 = pow(2, 3); // 2 raised to the power of 3
    cout << result2;

    // Exercise
    double radius;
    cin >> radius;
    double area = 3.14 * pow(radius, 2);
    cout << area;
    return 0;
}