#include <iostream>
using namespace std;

int main() {
    double x = 10;
    double y = 3;
    double z1 = x + y;           // Addition
    double z2 = x - y;           // Subtraction
    double z3 = x * y;           // Multiplication
    double z4 = x / y;        // Division
    
    x = x + 5;      // x = 15
    y += 2;         // y = 5
    x++;            // x = 16  // Increment
    y--;            // y = 4   // Decrement
    y = x++;      // y = 16, x = 17 (post-increment)

    int increment = ++x; // x = 18, increment = 18 (pre-increment)

    std :: cout << z1 << " " << z2 << " " << z3 << " " << z4;
    return 0;
}