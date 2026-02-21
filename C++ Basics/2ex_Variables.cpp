#include <iostream>
using namespace std;

// Swap the values of two variables

int main() {
    int a = 1;
    int b = 2;
    int c;
    c = a;
    a = b;
    b = c;
    std::cout << a << b;
}