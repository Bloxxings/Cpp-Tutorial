#include <iostream>
using namespace std;

int main() {
    // 2 bytes // Range: -32,768 to 32,767
    short smallNumber = 10; int regularNumber = 1000; // 4 bytes // Range: -2,147,483,648 to 2,147,483,647
    // 4 bytes // Range: -2,147,483,648 to 2,147,483,647
    int regularNumber = 1000;
    // 8 bytes // Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    long largeNumber = 100000;
    // 4 bytes // Precision: 6-7 digits
    float decimalNumber = 5.75f; // f indicates float type
    // 8 bytes // Precision: 15-16 digits
    double largeDecimalNumber = 19.99;
    // 10 bytes // Precision: 18-19 digits
    long double veryLargeDecimalNumber = 123.456789;
    // 1 byte // Single character
    char character = 'A';
    // 1 byte // true or false
    bool isTrue = true; 

    double price = 99.99;
    float interestRate = 3.67f; // f indicates float type
    long fileSize = 90000L; // L indicates long type
    char letter = 'a';
    bool isValid = false;

    auto data = 100; // Compiler infers int type
    auto largeData = 100000L; // Compiler infers long type
    auto floatingNumber = 1.86f; // Compiler infers float type

    int number;
    cout << number; // Uninitialized variable (contains garbage value)
    int initializedNumber {}; // Initialized to 0
    cout << initializedNumber; // Outputs 0

    unsigned int numberOfItems = 50; // Only non-negative values

    int million = 1'000'000; // Using apostrophes for readability
    short another = million; // Potential data loss due to narrowing conversion
    cout << another; // Outputs unpredictable value due to overflow

    return 0;
}