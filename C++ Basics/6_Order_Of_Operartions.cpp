#include <iostream>
using namespace std;

int main() {
    double x = 1 + 2 * 3; // 7 // Multiplication first, then addition
    double y = (1 + 2) * 3; // 9 // Parentheses first, then multiplication
    x = 10;
    y = 5;

    // Exercise 
    double z = (x + 10) / (3 * y); // (20) / (15) = 1.33333
    std::cout << z;
    return 0;
}