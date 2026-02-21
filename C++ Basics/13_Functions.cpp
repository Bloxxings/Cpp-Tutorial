#include <iostream>
using namespace std;

void myFunction() { // void = no return value
    cout << "I just got executed!";
}

int addition(int x, int y) { // int = returns an integer value
    return x + y;
}

void increment(int &n) { // & = change the original variable
    n++; 
}

int main() {
    int x = 10;
    increment(x); // x is now 11
}

void salute(string name, string message = "Hello") { // default parameter
    cout << message << " " << name << endl;
}

int multiplier(int a, int b) { return a * b; } // function overloading
double multiplier(double a, double b) { return a * b; } // function overloading









int main() {
    myFunction();
    myFunction();
    return 0;
}