#include <iostream>
using namespace std;

int main() {
    double x;
    double y;
    cin >> x >> y; // Input values for x and y from the console
    cout << x + y; // Output the sum of x and y to the console

    // Exercise Farenheit to Celsius
    cout << "Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius;
    return 0;
}